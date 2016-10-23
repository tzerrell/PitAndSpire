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
#include "dungeon.h"

//lists all the dungeons in the world
//also lets you know which dungeon (if any) a location is in

class world {
public:
    world();
    world(const world& orig);
    virtual ~world();
    
    dungeon* owningDungeon(int x, int y, int z);
private:
    std::vector<dungeon*> dungeons;
};

#endif /* WORLD_H */

