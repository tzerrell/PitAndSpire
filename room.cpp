/* 
 * File:   room.cpp
 * Author: tnc02_000
 * 
 * Created on August 11, 2016, 8:33 PM
 */

#include <ostream>
#include "room.h"
#include "party.h"

room::room() {
}

room::~room() {
}

bool room::operator==(const room& rhs) {
    //TODO: Right now I'm planning to structure code so that each room has a
    //unique instance (and so a unique memory location). But if I want to change
    //that, see another draft i considered below.
    
    return (this == &rhs);
    
    /*
    
    //TODO: This comparison checks whether the rooms have identical tiles; if
    //so they're equal, otherwise they aren't. This may not be how I want to
    //handle this long term -- probably each room should only have a single
    //instance? In which case I think I should be able to just check if the
    //pointers to it say the same memory location?
     
    //TODO: This equality comparison assumes the tiles vector is sorted. Make
    //sure it is!!!
    std::vector<tiles*>::iterator lhsIter;
    std::vector<tiles*>::iterator rhsIter;
    
    for (lhsIter = this->tiles.begin(), rhsIter = rhs->tiles.begin();
            lhsIter != this->tiles.end() && rhsIter != rhs->tiles.end();
            ++lhsIter, ++rhsIter)
    {
        if (**lhsIter != **rhsIter) return false;
    }
    if (lhsIter != this->tiles.end() || rhsIter != rhs->tiles.end()) {
        //tile vectors are different lengths, so rooms aren't equal
        return false;
    }
    
    //rooms contain identical collections of tiles, so are the same (I assert)
    return true;
    
    */
}

bool room::operator!=(const room& rhs) {
    return !(*this == rhs);
}

void room::presentGangTo(party* targetParty) {
    //TODO: Generate a gang for the room if it needs one (no current gang and 
    //it has been long enough since a party patrolled this room)
    
    targetParty->activeGang = occupants;
}

bool room::serialize(std::ostream& sout) {
    sout << "tPatS room serialization v1.0.0\n";
    //TODO: Implement
}
