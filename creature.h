/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   creature.h
 * Author: tnc02_000
 *
 * Created on August 14, 2016, 10:13 PM
 */

#ifndef CREATURE_H
#define CREATURE_H

#include <map>
#include "attack_types.h"

class creature {
public:
    creature();
    creature(const creature& orig);
    virtual ~creature();
    void attack(creature* target);
    
    int getResilience(damage_type againstType);
    int getHardness(damage_type againstType);
    int getDodge(attack_type againstType);
    
    void takeDamage(int damage);
    void takeRawDamage(int damage, damage_type dmg_t);
    void heal(int amount);
private:
    //TODO: would prefer to use unordered_map, but don't want to have to
    //implement the workaround for enum class issue discussed in
    //http://stackoverflow.com/questions/18837857/cant-use-enum-class-as-unordered-map-key
    //
    //In theory this should be fixed in current g++ but apparently it isn't?
    std::map<damage_type, int> resilience;    //max damage that can be resisted
    std::map<damage_type, int> hardness;  //min damage that will be resisted
    std::map<attack_type, int> dodge;     //skill at avoiding attack type
    
    int maxHP;
    int curHP;
};

#endif /* CREATURE_H */

