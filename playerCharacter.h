/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   playerCharacter.h
 * Author: tnc02_000
 *
 * Created on August 14, 2016, 10:09 PM
 */

#ifndef PLAYERCHARACTER_H
#define PLAYERCHARACTER_H

#include "creature.h"

class playerCharacter:creature {
public:
    playerCharacter();
    playerCharacter(const playerCharacter& orig);
    virtual ~playerCharacter();
private:

};

#endif /* PLAYERCHARACTER_H */

