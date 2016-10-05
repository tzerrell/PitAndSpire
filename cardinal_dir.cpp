/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "cardinal_dir.h"
#include "tile.h"

WallDirection dirCast(cardinal_dir dir) {
    switch(dir) {
        case cardinal_dir::Dir_E:
            return WallDirection::EWallDir;
        case cardinal_dir::Dir_W:
            return WallDirection::WWallDir;
        case cardinal_dir::Dir_S:
            return WallDirection::SWallDir;
        case cardinal_dir::Dir_N:
            return WallDirection::NWallDir;
        default:
            ;
            //TODO: Throw exception "unexpected failure of dirCast switch to find option" or the like
    }
}

cardinal_dir dirCast(WallDirection dir) {
    switch(dir) {
        case WallDirection::EWallDir:
            return cardinal_dir::Dir_E;
        case WallDirection::WWallDir:
            return cardinal_dir::Dir_W;
        case WallDirection::SWallDir:
            return cardinal_dir::Dir_S;
        case WallDirection::NWallDir:
            return cardinal_dir::Dir_N;
        default:
            ;
            //TODO: Throw exception for passing BWallDir or TWallDir as param
    }
}
