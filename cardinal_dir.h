/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   cardinal_dir.h
 * Author: tnc02_000
 *
 * Created on September 28, 2016, 5:00 PM
 */

#ifndef CARDINAL_DIR_H
#define CARDINAL_DIR_H

#include "tile.h"

enum class cardinal_dir {
    DIR_E,
    DIR_N,
    DIR_W,
    DIR_S
};

// TODO: Is this appropriate explicit casting of enum class to int?
cardinal_dir rotateRight(cardinal_dir dir) {
    return (static_cast<int>dir - 1) % 4;
};
cardinal_dir rotateLeft(cardinal_dir dir) {
    return (static_cast<int>dir + 1) % 4;
};
cardinal_dir rotate180(cardinal_dir dir) {
    return (static_cast<int>dir + 2) % 4;
};

WallDirection dirCast(cardinal_dir dir);
cardinal_dir dirCast(WallDirection dir);

#endif /* CARDINAL_DIR_H */

