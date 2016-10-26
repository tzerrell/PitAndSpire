/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   random.h
 * Author: tnc02_000
 *
 * Created on August 15, 2016, 6:01 PM
 */

#ifndef RANDOM_H
#define RANDOM_H

class creature;

namespace rnd {
    int attack(int acc, int dmg_lo, int dmg_hi, int ddg, int hard, int res); //generic attack with both accuracy and strength
    bool check(int skill, int difficulty); //generic skill check
    int resist(int dmg, int hard, int res); //given dmg pre-resist damage, and hardness hard and resilience res against its type, compute actual damage taken
    int intFromRange(int lo, int hi); //random int in [lo,hi]
    
    namespace atk {
        template<attack_type> bool genericHit(creature*, creature*);
        template<damage_type> int genericDamage(creature*, creature*);
    }
}

#endif /* RANDOM_H */

