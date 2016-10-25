/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   monsterType.h
 * Author: tnc02_000
 *
 * Created on September 30, 2016, 7:30 PM
 */

#ifndef MONSTERTYPE_H
#define MONSTERTYPE_H

#include <map>
#include "attack_types.h"
#include "random.h"

class monsterType {
    struct extremes { int lo; int hi; };
public:
    monsterType();
    monsterType(const monsterType& orig);
    virtual ~monsterType();
    
    int generateResilience(damage_type type);
    int generateHardness(damage_type type);
    int generateDodge(attack_type type);
    int generateMaxHP();
private:
    std::map<damage_type, extremes> resilience;    //max damage that can be resisted
    std::map<damage_type, extremes> hardness;  //min damage that will be resisted
    std::map<attack_type, extremes> dodge;     //skill at avoiding attack type
    
    extremes maxHP;
};

#endif /* MONSTERTYPE_H */

