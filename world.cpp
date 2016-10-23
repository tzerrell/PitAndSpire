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

#include "world.h"

world::world() {
}

world::world(const world& orig) {
}

world::~world() {
}

dungeon* world::owningDungeon(int x, int y, int z) {
    for (auto i = dungeons.begin(); i != dungeons.end(); ++i) 
        if ((*i)->containsCoord(x,y,z)) return *i;
    
    return nullptr; //TODO: proper form of null
}

