/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   party.h
 * Author: tnc02_000
 *
 * Created on August 14, 2016, 10:06 PM
 */

#ifndef PARTY_H
#define PARTY_H

#include "playerCharacter.h"

const int MAX_PARTY_SIZE = 4;

class party {
public:
    party();
    party(const party& orig);
    virtual ~party();
private:
    playerCharacter character[MAX_PARTY_SIZE];
};

#endif /* PARTY_H */

