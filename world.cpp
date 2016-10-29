/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   world.cpp
 * Author: tnc02_000
 * 
 * Created on October 22, 2016, 10:29 PM
 */

#include <algorithm>
#include <vector>
#include <ostream>
#include <fstream>
#include "world.h"
#include "dungeon.h"

world::world() {
}

world::world(const world& orig) {
}

world::~world() {
}

dungeon* world::dungeonOwning(int x, int y, int z) {
    for (auto i = dungeons.begin(); i != dungeons.end(); ++i) 
        if ((*i)->containsCoord(x,y,z)) return *i;
    
    return nullptr; //TODO: proper form of null
}

bool world::serialize(std::ostream& sout, std::string dungPath) {
    sout << "tPatS world serialization v1.0\n";
    sout << "The world " << name << " contains " 
            << dungeons.size() << " dungeons.\n";
    
    std::sort(dungeons.begin(), dungeons.end());
    std::ofstream dout;
    int count = 0;
    for (auto i = dungeons.begin(); i!= dungeons.end(); ++i, ++count) {
        std::string path("");
        path += dungPath;
        path += name;
        path += "_dung_";
        path += std::to_string(count);
        
        dout.open(path);
        (*i)->serialize(dout);
        dout.close();
    }
    //TODO: Anything other than dungeons to serialize?
    //TODO: Catch "exceptions" and return appropriately
}

bool world::operator!=(const world& rhs) const {
    return name.compare(rhs.name);
}

bool world::operator==(const world& rhs) const {
    return !((*this) != rhs);
}

bool world::operator<(const world& rhs) const {
    return (name.compare(rhs.name) < 0);
}

bool world::operator>(const world& rhs) const {
    return rhs < (*this);
}

bool world::operator<=(const world& rhs) const {
    return !((*this) > rhs);
}

bool world::operator>=(const world& rhs) const {
    return !((*this) < rhs);
}
