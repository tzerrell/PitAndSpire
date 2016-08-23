/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   attack_types.h
 * Author: tnc02_000
 *
 * Created on August 14, 2016, 10:15 PM
 */

#ifndef ATTACK_TYPES_H
#define ATTACK_TYPES_H

enum attack_types {
    ATKT_MELEE_WEAP,
    ATKT_MELEE_NATURAL,
    ATKT_RANGED_WEAP,
    ATKT_BOLT,   //Think poison spit or magic missile
    ATKT_BEAM,   //Think laser or lightning bolt
    ATKT_SMITE,    //Damages target without traveling
    ATKT_MENTAL,
    ATKT_VOLUMETRIC, //Think poisonous gas or fireball
    ATKT_VISUAL  //Think medusa's gaze
};

enum damage_types {
    DMGT_IMPACT,
    DMGT_CUT,
    DMGT_STAB,
    DMGT_FIRE,
    DMGT_COLD,
    DMGT_ACID,
    DMGT_ELECTRIC,
    DMGT_LIGHT,
    DMGT_HOLY,
    DMGT_PROFANE,
    DMGT_POISON,
    DMGT_ROT
};


#endif /* ATTACK_TYPES_H */

