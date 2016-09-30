/* 
 * File:   tile.h
 * Author: tnc02_000
 *
 * Created on August 11, 2016, 7:01 PM
 */

#ifndef TILE_H
#define	TILE_H

#include <map>
#include "class-declarations.h"

enum class WallDirection { NWallDir, EWallDir, SWallDir, WWallDir, 
    DWallDir, UWallDir };
enum class WallType { /*TODO*/ }; //TODO: might be class? instead of enum

class tile {
public:
    tile();
    tile(const tile& orig);
    virtual ~tile();
    
    static tile* lookup(int x ,int y ,int z);    //returns the tile at given global coordinates
    
    bool isPassable(WallDirection dir);     //Can you walk from this tile in dir?
    static bool isPassable(WallType wall);
private:
    room* owner;
    struct {int x; int y; int z;} location;
    std::map<WallDirection, WallType> wall;
};

#endif	/* TILE_H */

