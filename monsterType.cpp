/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   monsterType.cpp
 * Author: tnc02_000
 * 
 * Created on September 30, 2016, 7:30 PM
 */

#include "monsterType.h"

monsterType::monsterType() {
}

monsterType::monsterType(const monsterType& orig) {
}

monsterType::~monsterType() {
}

monsterType::generateResilience(damage_type type) {
    return rnd::intFromRange(resilience[type].lo, resilience[type].hi);
}

monsterType::generateHardness(damage_type type) {
    return rnd::intFromRange(hardness[type].lo, hardness[type].hi);
}

monsterType::generateDodge(attack_type type) {
    return rnd::intFromRange(dodge[type].lo, dodge[type].hi);
}

monsterType::generateMaxHP() {
    return rnd::intFromRange(maxHP.lo, maxHP.hi);
}
