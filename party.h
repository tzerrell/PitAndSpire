/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   party.h
 * Author: tnc02_000
 *
 * Created on August 14, 2016, 10:06 PM
 */

#ifndef PARTY_H
#define PARTY_H

#include "cardinal_dir.h"
#include "playerCharacter.h"
#include "room.h"

//Forward Declarations
class gang;
class room;
class world;

const int MAX_PARTY_SIZE = 4;

class party {
public:
    party();
    party(const party& orig);
    virtual ~party();
    
    // TODO: Confirm I want inline here
    inline void turnRight() { facing = rotateRight(facing); };
    inline void turnLeft() { facing = rotateLeft(facing); };
    inline void turn180() { facing = rotate180(facing); };
    
    void updateLocation(int newX, int newY, int newZ);
    void enter(room*);
    bool advance();
    
    friend void room::presentGangTo(party*);
private:
    playerCharacter character[MAX_PARTY_SIZE];
    cardinal_dir facing;
    struct { int x; int y; int z; } coord;
    room* inRoom;
    gang* activeGang;
    world* inWorld;
    //int currPatrolOffsetTime; //How far in the future the respawn time
                                //should be; that is, how long is this party's
                                //patrol effective for (currently). 
                                //TODO: This is not yet an implemented feature
    
    int fall(); //see if the party should fall from current position; returns # squares fallen
};

#endif /* PARTY_H */

