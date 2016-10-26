/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   random.cpp
 * Author: tnc02_000
 *
 * Created on August 15, 2016, 6:04 PM
 */

//TODO: All of these are using inappropriate random number generation
//
//See e.g. http://stackoverflow.com/questions/288739/generate-random-numbers-uniformly-over-an-entire-range
//for a better solution

#include <cmath>
#include <random>

#include "creature.h"

namespace rnd {
    static constexpr auto pi = acos(-1);
    static constexpr double accVarScale = 1.5;
    static constexpr double skillVarScale = accVarScale;
    
    std::default_random_engine gen;
    
    //Note these are global so I don't really control when constructor is called
    std::uniform_real_distribution<double> atanUnifDist(-pi/2, pi/2);
    std::uniform_real_distribution<double> unitUnifDist(0,1);

    int attack(int acc, int dmg_lo, int dmg_hi, int ddg, int hard, int res) {
        double toHitScore = std::atan( accVarScale * (acc - ddg) );
        
        //-1 indicates the attack was a miss
        if (atanUnifDist(gen) > toHitScore) return -1;
        
        //If the attack hits the result should be nonnegative
        std::uniform_int_distribution<> strDist(dmg_lo, dmg_hi);
        std::uniform_int_distribution<> resDist(hard, res);
        
        return std::max(strDist(gen) - resDist(gen),0);
    }
    
    int resist(int dmg, int hard, int res) {
        std::uniform_int_distribution<> resDist(hard, res);
        
        return std::max(dmg - resDist(gen),0);
    }
    
    bool check(int skill, int difficulty) {
        double toSucceedScore = std::atan(skillVarScale * (skill - difficulty));
        if (atanUnifDist(gen) < toSucceedScore) return true;
        return false;
    }
    
    int intFromRange(int lo, int hi) {
        std::uniform_int_distribution<> dist(lo, hi);
        
        return dist(gen);
    }
    
    namespace atk {
        template<attack_type A>
        bool genericHit(creature* source, creature* target) {
            //TODO: actual accuracy from source creature rather than this
            //garbage number
            int acc = 47;
            double toHitScore = std::atan(accVarScale * (acc - target->getDodge(A)));
        
            if (atanUnifDist(gen) < toHitScore)
                return true;
            else
                return false;
        }
        
        template<damage_type D>
        int genericDamage(creature* source, creature* target) {
            //TODO: actual damage from source creature rather than these
            //garbage numbers
            int dmgLo = 42; int dmgHi = 47;
            std::uniform_int_distribution<> strDist(dmgLo, dmgHi);
            std::uniform_int_distribution<> resDist(target->getHardness(D),
                    target->getResilience(D));
        
        return std::max(strDist(gen) - resDist(gen),0);
        }
    }
}
