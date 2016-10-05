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
    Dir_E,
    Dir_N,
    Dir_W,
    Dir_S
};

// TODO: Is this appropriate explicit casting of enum class to int?
cardinal_dir rotateRight(cardinal_dir dir);
cardinal_dir rotateLeft(cardinal_dir dir);
cardinal_dir rotate180(cardinal_dir dir);

WallDirection dirCast(cardinal_dir dir);
cardinal_dir dirCast(WallDirection dir);

#endif /* CARDINAL_DIR_H */

