/* 
 * File:   dungeon.cpp
 * Author: tnc02_000
 * 
 * Created on August 11, 2016, 6:50 PM
 */

#include "dungeon.h"
#include "room.h"
#include "tile.h"

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
    if (!containsCoord(x,y,z)) return nullptr;  //TODO: null pointer format?
    
    std::size_t width = getWidth();
    std::size_t height = getHeight();
    
    std::size_t index = width*height*(x - westBoundary)
            + height*(y - southBoundary)
            + (z - bottomBoundary);
    
    return tiles[index];
}

bool dungeon::serialize(std::ostream& sout) const {
    sout << "tPatS dungeon serialization v1.0.0\n";
    sout << "The dungeon is at " << westBoundary << "-" << eastBoundary 
            << "x" << southBoundary << "-" << northBoundary 
            << "x" << bottomBoundary << "-" << topBoundary << '\n';
    sout << "The dungeon contains " << tiles.size() << " tiles.\n";
    for (auto i = tiles.begin(); i != tiles.end(); ++i) {
        sout << (**i);
    }
    sout << "End of tiles\n";
    sout << "The dungeon contains " << rooms.size() << " rooms.\n";
    //TODO: Serialize rooms
    sout << "End of rooms\n";
    //TODO: Anything other than tiles and rooms to serialize?
    //TODO: Catch "exceptions" and return appropriately
}
