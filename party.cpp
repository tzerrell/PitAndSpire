/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   party.cpp
 * Author: tnc02_000
 * 
 * Created on August 14, 2016, 10:06 PM
 */

#include "party.h"

#include "tile.h"
#include "cardinal_dir.h"

party::party() {
}

party::party(const party& orig) {
}

party::~party() {
}

void party::updateLocation(int newX, int newY, int newZ) {
    //Update room if it's changed
    room* newRoom = tile::lookup(newX, newY, newZ, inWorld)->getOwner();
    if (*inRoom != *newRoom)
        enter(newRoom);
    
    //TODO: check for things like items, traps, ...
    //This should happen before falling (but perhaps after updating the coord?)
    //so that if fall calls updateLocation the result of that call is what
    //stays.
    
    //Update coord
    coord.x = newX; coord.y = newY; coord.z = newZ;
    
    //If necessary, fall
    //Note that fall() calls updateLocation, so be careful
    fall();
}

void party::enter(room* newRoom) {
    inRoom = newRoom;
    newRoom->presentGangTo(this);
    //TODO: Anything else?
}

bool party::advance() {
    //Returns true if the party successfully advanced, false otherwise.
    
    //Check if there is a wall in the way
    if (!(tile::lookup(coord.x,coord.y,coord.z,inWorld)->isPassable(dirCast(facing)))) {
        //TODO: Code for trying to advance through impassable wall.
        return false;
    }
    
    //TODO: Check if monsters can block movement (no secret door detection if monsters have block opportunity, no need to check if monsters succeed)
    
    //Advance the coordinate
    switch (facing) {
        case cardinal_dir::Dir_E:
            updateLocation(coord.x + 1, coord.y, coord.z);
            break;
        case cardinal_dir::Dir_W:
            updateLocation(coord.x - 1, coord.y, coord.z);
            break;
        case cardinal_dir::Dir_N:
            updateLocation(coord.x, coord.y + 1, coord.z);
            break;
        case cardinal_dir::Dir_S:
            updateLocation(coord.x, coord.y - 1, coord.z);
            break;
    }
    
    return true;
}

int party::fall() {
    //If there is a floor, don't fall.
    if (!(tile::lookup(coord.x,coord.y,coord.z,inWorld)->isPassable(WallDirection::DWallDir))) 
        return 0;
    
    int descentDistance = 0;
    while (tile::lookup(coord.x,coord.y,coord.z - descentDistance,inWorld)->isPassable(WallDirection::DWallDir)) {
        ++descentDistance;
    }
    
    //TODO: If the party is flying, subtract max flying height from descentDistance (never below 0 though)
    
    //TODO: Falling damage if applicable
    
    //Fall
    //Note that updateLocation calls fall(), so be careful
    if (descentDistance != 0)
        updateLocation(coord.x, coord.y, coord.z - descentDistance);
    
    return descentDistance;
}
