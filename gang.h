/* 
 * File:   gang.h
 * Author: tnc02_000
 *
 * Created on August 11, 2016, 8:39 PM
 */

#ifndef GANG_H
#define	GANG_H

#include <vector>
#include "class-declarations.h"

class gang {
public:
    gang();
    gang(const gang& orig);
    virtual ~gang();
private:
    int numMonsterTypes;
    std::vector<monster*> monsters;
    std::vector<int> numMonsters;
};

#endif	/* GANG_H */

