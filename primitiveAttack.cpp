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
bool primitiveAttack::attack(creature* source, creature* target,
        std::stack<primitiveAttack*>* readied) {
    if (toHit_func == nullptr) {
        //TODO: Throw an exception if toHit_func == nullptr
        //Then treat attack as if it never happened I think
        return false;
    }
    
    if ((*toHit_func)(source, target, atk_t)) {
        //Missed
        if (onMissEffects_func != nullptr)
            (*onMissEffects_func)(source, target);
        if (onMissEffects_func != nullptr)
            (*sideEffects_func)(source, target);
        if (followupOnMiss && followup != nullptr) readied->push(followup);
        return false;
    } else {
        //Hit
        int dmg; 
        if (damage_func != nullptr) {
            dmg = (*damage_func)(source, target, dmg_t);
            target->takeDamage(dmg);
        } else {
            dmg = 0;
        }
        if (onHitEffects_func != nullptr)
            (*onHitEffects_func)(source, target, (dmg!=0));
        if (sideEffects_func != nullptr)
            (*sideEffects_func)(source, target);
        if (followupOnHit && followup != nullptr) readied->push(followup);
        return true;
    }
}
