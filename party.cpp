/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   party.cpp
 * Author: tnc02_000
 * 
 * Created on August 14, 2016, 10:06 PM
 */

#include "party.h"

party::party() {
}

party::party(const party& orig) {
}

party::~party() {
}

bool party::advance() {
    //Returns true if the party successfully advanced, false otherwise.
    
    //TODO:
    //Check if there is a wall in the way
    //Check if monsters can block movement (no secret door detection if monsters have block opportunity, no need to check if monsters succeed)
    //Advance the coordinate
    //See if the party is supported on new location; if not drop them until they are supported
    //If necessary, change the room or even dungeon party is in (updating monsters etc as necessary)
}
