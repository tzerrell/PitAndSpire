/* 
 * File:   monster.h
 * Author: tnc02_000
 *
 * Created on August 11, 2016, 8:41 PM
 */

#ifndef MONSTER_H
#define	MONSTER_H

#include "class-declarations.h"
#include "creature.h"

class monsterType;

class monster:creature {
public:
    monster();
    monster(const monster& orig);
    monster(const monsterType& type, bool createGeneric = false);
    virtual ~monster();
    
    bool generic() { return isGeneric; }
private:
    //Sometimes it is useful to have a monster that is a generic instance of a
    //monsterType -- that is, we want to be able to interact with a monster of
    //type monsterType without keeping track of details that make it an
    //individual. For such monsters, isGeneric == true. Otherwise it's false.
    bool isGeneric = false;
};

#endif	/* MONSTER_H */

