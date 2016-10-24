/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   attack.cpp
 * Author: tnc02_000
 * 
 * Created on October 23, 2016, 6:26 PM
 */

#include <vector>
#include <stack>

#include "attack.h"
#include "primitiveAttack.h"

attack::attack() {
}

attack::attack(const attack& orig) {
}

attack::~attack() {
}

void attack::atk(creature* target) {
    std::stack<primitiveAttack*> readiedAttacks;
    
    for (auto i = component.rbegin(); i != component.rend(); ++i) {
        readiedAttacks.push(*i);
    }
    
    while (!readiedAttacks.empty()) {
        //The order is important because we want to pop the element we just
        //read but primitiveAttack::attack() can push onto this stack
        primitiveAttack* currAtk = readiedAttacks.top();
        readiedAttacks.pop();
        if (currAtk->attack(target, &readiedAttacks)) {
            ;   //TODO: Actions on hits (e.g. print message)
        } else {
            ;   //TODO: Actions on misses (e.g. print message)
        }
    }
}

