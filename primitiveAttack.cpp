/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   primitiveAttack.cpp
 * Author: tnc02_000
 * 
 * Created on October 23, 2016, 6:41 PM
 */

#include "primitiveAttack.h"
#include <stack>
#include "creature.h"
#include "random.h"

primitiveAttack::primitiveAttack() {
}

primitiveAttack::primitiveAttack(const primitiveAttack& orig) {
}

primitiveAttack::~primitiveAttack() {
}

//target is the creature being attacked
//readied is the stack of primitiveAttacks which compose the current attack
// and which have yet to be resolved
bool primitiveAttack::attack(creature* target, std::stack<primitiveAttack*>* readied) {
    int dmg = rnd::attack(accuracy, damage.min, damage.max,
            target->getDodge(atk_t), target->getHardness(dmg_t),
            target->getResilience(dmg_t));
    
    if (dmg == -1) {
        //Missed
        //TODO: actions on a miss
        if (followupOnMiss) readied->push(followup);
        return false;
    } else {
        //Hit
        //TODO: actions on a hit
        target->takeDamage(dmg);
        if (followupOnHit) readied->push(followup);
        return true;
    }
}
