/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "cardinal_dir.h"

WallDirection dirCast(cardinal_dir dir) {
    switch(dir) {
        case DIR_E:
            return EWallDir;
        case DIR_W:
            return WWallDir;
        case DIR_S:
            return SWallDir;
        case DIR_N:
            return NWallDir;
    }
}

cardinal_dir dirCast(WallDirection dir) {
    switch(dir) {
        case EWallDir:
            return EWallDir;
        case WWallDir:
            return WWallDir;
        case SWallDir:
            return SWallDir;
        case NWallDir:
            return NWallDir;
        default:
            ;
            //TODO: Throw exception for passing BWallDir or TWallDir as param
    }
}
