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

//EnumTraits keeps track of special properties of enum classes (or enums in
//general). Things like the first or last element of the enum, or the first or
//last standard element.
//
//Typical names:
//
template<typename E> struct EnumTraits;

//When updating this, make sure corresponding EnumTraits entry is also correct
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


template<> struct EnumTraits<attack_type> { 
    static constexpr attack_type FIRST = attack_type::ATKT_NO_ATK; 
    static constexpr attack_type LAST = attack_type::ATKT_VISUAL;
    static constexpr attack_type FIRST_STD = attack_type::ATKT_MELEE_WEAP; 
    static constexpr attack_type LAST_STD = attack_type::ATKT_VISUAL;
};
template<> struct EnumTraits<damage_type> {
    static constexpr damage_type FIRST = damage_type::DMGT_NO_DMG; 
    static constexpr damage_type LAST = damage_type::DMGT_ETHEREAL;
    static constexpr damage_type FIRST_STD = damage_type::DMGT_IMPACT; 
    static constexpr damage_type LAST_STD = damage_type::DMGT_ETHEREAL;
};

#endif /* ATTACK_TYPES_H */

