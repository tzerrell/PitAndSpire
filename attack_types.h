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

enum class attack_type {
    ATKT_NO_ATK,
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

enum class damage_type {
    DMGT_NO_DMG,
    DMGT_IMPACT,
    DMGT_CUT,
    DMGT_STAB,
    DMGT_FIRE,
    DMGT_COLD,
    DMGT_ACID,
    DMGT_ELECTRIC,
    DMGT_LIGHT,
    DMGT_HOLY,      //specific to the spire
    DMGT_PROFANE,   //specific to the pit
    DMGT_POISON,
    DMGT_ROT,       //specific to the wilds
    DMGT_ETHEREAL     //specific to the academy
            //No damage type specific to the burghers/the guilds (name undecided)
            //No damage type specific to the nobles/the court/the houses (name undecided)
};


#endif /* ATTACK_TYPES_H */

