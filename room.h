/* 
 * File:   room.h
 * Author: tnc02_000
 *
 * Created on August 11, 2016, 8:33 PM
 */

#ifndef ROOM_H
#define	ROOM_H

#include "class-declarations.h"

//Forward Declarations
class party;

class room {
public:
    room();
    virtual ~room();
    
    void presentGangTo(party*); //Generates a new gang if necessary and makes it
                                //the party's active gang
private:
    dungeon*    owner;
    inventory*  items;
    gang*       occupants;
    
    long        patrolledUntil; //The time after which monsters will respawn.
                                //Note: type should be whatever stores a time.
};

#endif	/* ROOM_H */

