/* 
 * File:   dungeon.cpp
 * Author: tnc02_000
 * 
 * Created on August 11, 2016, 6:50 PM
 */

#include "dungeon.h"

dungeon::dungeon(int WBnd, int EBnd, int SBnd, int NBnd, int BBnd, int TBnd)
        : westBoundary(WBnd), eastBoundary(EBnd), southBoundary(SBnd),
        northBoundary(NBnd), bottomBoundary(BBnd), topBoundary(TBnd)
{
    //TODO
}

dungeon::~dungeon() {
}

bool dungeon::containsCoord(int x, int y, int z) {
    if (x < this->getWestBound() || x > this->getEastBound()) return false;
    if (y < this->getSouthBound() || y > this->getNorthBound()) return false;
    if (z < this->getBottomBound() || z > this->getTopBound()) return false;
    return true;
}

tile* dungeon::getTile(int x, int y, int z) {
    std::size_t width = getWidth();
    std::size_t height = getHeight();
    
    std::size_t index = width*height*(x - westBoundary)
            + height*(y - southBoundary)
            + (z - bottomBoundary);
    
    return tiles[index];
}
