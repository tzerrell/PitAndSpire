/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   primitiveAttack.h
 * Author: tnc02_000
 *
 * Created on October 23, 2016, 6:41 PM
 */

#ifndef PRIMITIVEATTACK_H
#define PRIMITIVEATTACK_H

#include <stack>
#include "attack_types.h"

class creature;

class primitiveAttack {
public:
    primitiveAttack();
    primitiveAttack(const primitiveAttack& orig);
    virtual ~primitiveAttack();
    
    bool attack(creature* source, creature* target, std::stack<primitiveAttack*>* readied);
private:
    bool (*hit_func)(creature* src, creature* tgt);
    int (*damage_func)(creature* src, creature* tgt);
    void (*sideEffects_func)(creature* src, creature* tgt);
    void (*onHitEffects_func)(creature* src, creature* tgt, bool tookDmg);
    void (*onMissEffects_func)(creature* src, creature* tgt);
    
    primitiveAttack* followup;
    bool followupOnHit = true;
    bool followupOnMiss = false;
};

#endif /* PRIMITIVEATTACK_H */

