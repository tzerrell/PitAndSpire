/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   world.h
 * Author: tnc02_000
 *
 * Created on October 22, 2016, 10:29 PM
 */

#ifndef WORLD_H
#define WORLD_H

#include <vector>
#include <ostream>
#include <string>
#include "dungeon.h"

//lists all the dungeons in the world
//also lets you know which dungeon (if any) a location is in

class world {
public:
    world();
    world(const world& orig);
    virtual ~world();
    
    dungeon* dungeonOwning(int x, int y, int z);    //The dungeon in this world that owns tile (x,y,z)
    bool serialize(std::ostream& sout, std::string dungPath = std::string(""));
    
    bool operator==(const world& rhs) const;
    bool operator!=(const world& rhs) const;
    bool operator<(const world& rhs) const;
    bool operator>(const world& rhs) const;
    bool operator<=(const world& rhs) const;
    bool operator>=(const world& rhs) const;
    
private:
    std::string name;   //World names must be distinct to enable world comparison and sorting; they should also be acceptable in file names.
    std::vector<dungeon*> dungeons;
    
};

#endif /* WORLD_H */

