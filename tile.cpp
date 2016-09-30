/* 
 * File:   tile.cpp
 * Author: tnc02_000
 * 
 * Created on August 11, 2016, 7:01 PM
 */

#include "tile.h"

#include "dungeon.h"

tile::tile() {
}

tile::tile(const tile& orig) {
}

tile::~tile() {
}

static tile* tile::lookup(int x, int y, int z) {
    //TODO: Check global dungeon table to see which dungeon contains this tile
    //by comparing parameter coordinates to the bounds of each dungeon. Call
    //this dungeon "dung"
    dungeon dung;   //TODO: Won't actually use this line
    
    return dung.getTile(x,y,z);
}