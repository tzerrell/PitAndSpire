/* 
 * File:   room.h
 * Author: tnc02_000
 *
 * Created on August 11, 2016, 8:33 PM
 */

#ifndef ROOM_H
#define	ROOM_H

#include "class-declarations.h"

class room {
public:
    room();
    room(const room& orig);
    virtual ~room();
private:
    dungeon*    owner;
    inventory*  items;
    gang*       occupants;
};

#endif	/* ROOM_H */

