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
    
    bool attack(creature* target, std::stack<primitiveAttack*>* readied);
private:
    damage_type dmg_t;
    attack_type atk_t;
    int accuracy;
    struct {int min; int max;} damage;
    primitiveAttack* followup;
    bool followupOnHit = true;
    bool followupOnMiss = false;
};

#endif /* PRIMITIVEATTACK_H */

