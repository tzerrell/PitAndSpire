/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   creature.cpp
 * Author: tnc02_000
 * 
 * Created on August 14, 2016, 10:13 PM
 */

#include <cmath>
#include "creature.h"
#include "random.h"

creature::creature() {
}

creature::creature(const creature& orig) {
}

creature::~creature() {
}

void creature::takeDamage(int damage) {
    curHP -= damage;
    //TODO: Check for death or other critical points
}

void creature::takeRawDamage(int damage, damage_type dmg_t) {
    takeDamage(rnd::resist(damage, getHardness(dmg_t), getResilience(dmg_t)));
}

void creature::heal(int amount) {
    curHP += amount;
    curHP = std::min(curHP, maxHP);
}

int creature::getResilience(damage_type againstType) {
    return resilience[againstType];
}

int creature::getHardness(damage_type againstType) {
    return hardness[againstType];
}

int creature::getDodge(attack_type againstType) {
    return dodge[againstType];
}
