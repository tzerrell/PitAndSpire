/* 
 * File:   tile.h
 * Author: tnc02_000
 *
 * Created on August 11, 2016, 7:01 PM
 */

#ifndef TILE_H
#define	TILE_H

#include <map>
#include <ostream>
#include "class-declarations.h"
#include "walls.h"

class world;

class tile {
public:
    tile();
    tile(const tile& orig);
    virtual ~tile();
    
    static tile* lookup(int x ,int y ,int z, world* w);    //returns the tile at given global coordinates
    room* getOwner();
    
    bool isPassable(WallDirection dir);     //Can you walk from this tile in dir?
    
    bool serialize(std::ostream& sout) const;
    bool operator==(const tile& rhs);
    bool operator!=(const tile& rhs);
    friend std::ostream& operator<<(std::ostream& stream, const tile& t);
protected:
    static bool isPassable(WallType wall);
private:
    room* owner;
    struct {int x; int y; int z;} location;
    std::map<WallDirection, WallType> wall;
};

#endif	/* TILE_H */

