/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   attack.h
 * Author: tnc02_000
 *
 * Created on October 23, 2016, 6:26 PM
 */

#ifndef ATTACK_H
#define ATTACK_H

#include <vector>
#include "attack_types.h"

class creature;
class primitiveAttack;

class attack {
public:
    attack();
    attack(const attack& orig);
    virtual ~attack();
    
    void atk(creature* target);
private:
    std::vector<primitiveAttack*> component;
};

#endif /* ATTACK_H */

