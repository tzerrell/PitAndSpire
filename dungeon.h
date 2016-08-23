/* 
 * File:   dungeon.h
 * Author: tnc02_000
 *
 * Created on August 11, 2016, 6:50 PM
 */

#ifndef DUNGEON_H
#define	DUNGEON_H

#include <cstddef>
#include <cstdlib>
#include <vector>
#include "class-declarations.h"

class dungeon {
public:
    dungeon();
    dungeon(const dungeon& orig);
    virtual ~dungeon();
private:
    std::size_t length;
    std::size_t width;
    std::size_t height;
    
    std::vector<tile*> tiles;
};

#endif	/* DUNGEON_H */

