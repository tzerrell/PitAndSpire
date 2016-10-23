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

// dungeon
// 
// Instances of this class are areas where combat could potentially occur.
// Dungeons always occupy a rectangular prism volume, although some of the tiles
// in a dungeon may be rock, air, etc. 
// All boundaries are inclusive, meaning that all 8 vertex tiles (eastBoundary,
// southBoundary, bottomBoundary), (westBoundary, northBoundary, topBoundary),
// etc are included in the dungeon (as are all edge and face tiles).
// Since the dungeon boundaries are in a global coordinate system, dungeons
// should not overlap.
class dungeon {
public:
    //TODO: Constructors should actually initialize the dungeon
    dungeon(int WBnd, int EBnd, int SBnd, int NBnd, int BBnd, int TBnd);
    virtual ~dungeon();
    
    tile* getTile(int x, int y, int z); //Gets the tile at global coordinate (x,y,z)
                                        //returns null if that tile is not in this dungeon
       
    int getWestBound() const { return westBoundary; };
    int getEastBound() const { return eastBoundary; };
    int getSouthBound() const { return southBoundary; };
    int getNorthBound() const { return northBoundary; };
    int getBottomBound() const { return bottomBoundary; };
    int getTopBound() const { return topBoundary; };
    
    bool containsCoord(int x, int y, int z); //Checks if global coord (x,y,z) is in this dungeon
protected:
    std::size_t getLength() const
            { return westBoundary - eastBoundary + 1; };
    std::size_t getWidth() const
            { return northBoundary - southBoundary + 1; };
    std::size_t getHeight() const
            { return topBoundary - bottomBoundary + 1; };
    std::size_t getVolume() const
            { return getLength() * getWidth() * getHeight(); };
private:
    std::vector<tile*> tiles;
    std::vector<room*> rooms;
    const int westBoundary; const int eastBoundary;
    const int southBoundary; const int northBoundary;
    const int bottomBoundary; const int topBoundary;
};

#endif	/* DUNGEON_H */

