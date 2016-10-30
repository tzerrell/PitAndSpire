/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <ostream>
#include "walls.h"

std::ostream& operator<<(std::ostream& stream, const WallDirection& dir) {
    switch (dir) {
        case WallDirection::DWallDir:
            stream << 'D'; break;
        case WallDirection::EWallDir:
            stream << 'E'; break;
        case WallDirection::NWallDir:
            stream << 'N'; break;
        case WallDirection::SWallDir:
            stream << 'S'; break;
        case WallDirection::UWallDir:
            stream << 'U'; break;
        case WallDirection::WWallDir:
            stream << 'W'; break;
        default:
            stream << '!';
            //TODO: throw exception or log error
            break;
    }
    
    return stream;
}

std::ostream& operator<<(std::ostream& stream, const WallType& type) {
    //TODO: Implement
    
    return stream;
}

