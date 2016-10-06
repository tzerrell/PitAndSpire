/* 
 * File:   room.cpp
 * Author: tnc02_000
 * 
 * Created on August 11, 2016, 8:33 PM
 */

#include "room.h"

room::room() {
}

room::~room() {
}

void room::presentGangTo(party* targetParty) {
    //TODO: Generate a gang for the room if it needs one (no current gang and 
    //it has been long enough since a party patrolled this room)
    
    targetParty.activeGang = occupants;
}
