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

bool party::advance() {
    //Returns true if the party successfully advanced, false otherwise.
    
    //Check if there is a wall in the way
    if (!(tile::lookup(coord.x,coord.y,coord.z)->isPassable(dirCast(facing)))) {
        //TODO: Code for trying to advance through impassable wall.
        return false;
    }
    
    //TODO: Check if monsters can block movement (no secret door detection if monsters have block opportunity, no need to check if monsters succeed)
    //Advance the coordinate
    switch (facing) {
        case cardinal_dir::Dir_E:
            coord.x += 1;
            break;
        case cardinal_dir::Dir_W:
            coord.x -= 1;
            break;
        case cardinal_dir::Dir_N:
            coord.y += 1;
            break;
        case cardinal_dir::Dir_S:
            coord.y -= 1;
            break;
    }
    
    //See if the party is supported on new location; if not drop them until they are supported
    this->fall();
    
    //TODO: If necessary, change the room or even dungeon party is in (updating monsters etc as necessary)
    
    return true;
}

int party::fall() {
    //If there is a floor, don't fall.
    if (!(tile::lookup(coord.x,coord.y,coord.z)->isPassable(WallDirection::DWallDir))) 
        return 0;
    
    int descentDistance = 0;
    while (tile::lookup(coord.x,coord.y,coord.z - descentDistance)->isPassable(WallDirection::DWallDir)) {
        ++descentDistance;
    }
    
    //TODO: If the party is flying, subtract max flying height from descentDistance (never below 0 though)
    
    //TODO: Falling damage if applicable
    
    //Fall
    coord.z -= descentDistance;
    
    return descentDistance;
}
