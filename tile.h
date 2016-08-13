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

enum WallDirection { NWallDir, EWallDir, SWallDir, WWallDir, 
    DWallDir, UWallDir };
enum WallType { /*TODO*/ }; //TODO: might be class? instead of enum

class tile {
public:
    tile();
    tile(const tile& orig);
    virtual ~tile();
private:
    room* owner;
    struct {int x; int y; int z;} location;
    std::map<WallDirection, WallType> wall;
};

#endif	/* TILE_H */

