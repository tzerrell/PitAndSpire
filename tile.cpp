/* 
 * File:   tile.cpp
 * Author: tnc02_000
 * 
 * Created on August 11, 2016, 7:01 PM
 */

#include <ostream>
#include "tile.h"
#include "world.h"
#include "dungeon.h"
#include "cardinal_dir.h"

tile::tile() {
}

tile::tile(const tile& orig) {
}

tile::~tile() {
}

tile* tile::lookup(int x, int y, int z, world* w) {
    dungeon* dung = w->dungeonOwning(x,y,z);
    if (dung == nullptr) return nullptr;
    
    return dung->getTile(x,y,z);
}

room* tile::getOwner() {
    return owner;
}

bool tile::isPassable(WallDirection dir) {
    return isPassable(wall[dir]);
}

bool tile::isPassable(WallType wall) {
    //TODO: Implement
    
    return false;
}

bool tile::operator==(const tile& rhs) {
    //Two tiles must be the same if they are at the same location. Note that
    //this is not really enforced elsewhere in the code (currently) and so might
    //be a source of errors. TODO: Consider revising?
    return ((this->location.x == rhs.location.x) &&
            (this->location.y == rhs.location.y) &&
            (this->location.z == rhs.location.z));
}

bool tile::operator!=(const tile& rhs) {
    return !((*this) == rhs);
}

bool tile::serialize(std::ostream& sout) const {
    sout << "tile(" << location.x << "," << location.y << "," << location.z
            << ")";
    for (auto i = wall.begin(); i != wall.end(); ++i) {
        sout << i->first << i->second;
    }
    sout << '.';

    //TODO: Will ultimately need to localize more than location and wall
    
    sout << '\n';
    
    //TODO: Manage "exceptions" and return appropriately
}

std::ostream& operator<<(std::ostream& stream, const tile& t) {
    t.serialize(stream);
    return stream;
}
