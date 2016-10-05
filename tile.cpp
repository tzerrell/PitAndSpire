/* 
 * File:   tile.cpp
 * Author: tnc02_000
 * 
 * Created on August 11, 2016, 7:01 PM
 */

#include "tile.h"

#include "dungeon.h"
#include "cardinal_dir.h"

tile::tile() {
}

tile::tile(const tile& orig) {
}

tile::~tile() {
}

tile* tile::lookup(int x, int y, int z) {
    //TODO: Check global dungeon table to see which dungeon contains this tile
    //by comparing parameter coordinates to the bounds of each dungeon. Call
    //this dungeon "dung"
    dungeon* dung;   //TODO: Won't actually use this line
    
    return dung->getTile(x,y,z);
}

bool tile::isPassable(WallDirection dir) {
    return isPassable(wall[dir]);
}

bool tile::isPassable(WallType wall) {
    //TODO: Implement
    
    return false;
}
