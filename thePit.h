/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   thePit.h
 * Author: tnc02_000
 *
 * Created on August 22, 2016, 10:10 PM
 */

#ifndef THEPIT_H
#define THEPIT_H

#include "dungeon.h"

class thePit:dungeon {
public:
    thePit();
    thePit(const thePit& orig);
    virtual ~thePit();
private:
    
};

#endif /* THEPIT_H */

