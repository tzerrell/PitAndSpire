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

class creature {
public:
    creature();
    creature(const creature& orig);
    virtual ~creature();
    void attack(creature* target);
};

#endif /* CREATURE_H */

