/* 
 * File:   inventory.h
 * Author: tnc02_000
 *
 * Created on August 11, 2016, 8:42 PM
 */

#ifndef INVENTORY_H
#define	INVENTORY_H

#include <vector>
#include "class-declarations.h"

class inventory {
public:
    inventory();
    inventory(const inventory& orig);
    virtual ~inventory();
    
    bool isEmpty();
private:
    std::vector<item*> contents;
};

#endif	/* INVENTORY_H */

