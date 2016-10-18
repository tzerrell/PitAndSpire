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
            //TODO: Throw exception "unexpected failure of dirCast switch to find option" or the like
            return WallDirection::NWallDir;
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
            //TODO: Throw exception for passing BWallDir or TWallDir as param
            return cardinal_dir::Dir_N;
    }
}

// TODO: Is this appropriate explicit casting of enum class to int?
cardinal_dir rotateRight(cardinal_dir dir) {
    return static_cast<cardinal_dir>((static_cast<int>(dir) - 1) % 4);
};
cardinal_dir rotateLeft(cardinal_dir dir) {
    return static_cast<cardinal_dir>((static_cast<int>(dir) + 1) % 4);
};
cardinal_dir rotate180(cardinal_dir dir) {
    return static_cast<cardinal_dir>((static_cast<int>(dir) + 2) % 4);
};
