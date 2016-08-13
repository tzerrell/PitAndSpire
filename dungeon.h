/* 
 * File:   dungeon.h
 * Author: tnc02_000
 *
 * Created on August 11, 2016, 6:50 PM
 */

#ifndef DUNGEON_H
#define	DUNGEON_H

#include <vector>
#include "class-declarations.h"

class dungeon {
public:
    dungeon();
    dungeon(const dungeon& orig);
    virtual ~dungeon();
private:
    unsigned short length;
    unsigned short width;
    unsigned short height;
    std::vector<tile*> tiles;
};

#endif	/* DUNGEON_H */

