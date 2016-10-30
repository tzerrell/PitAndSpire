/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   walls.h
 * Author: tnc02_000
 *
 * Created on October 30, 2016, 12:51 AM
 */

#ifndef WALLS_H
#define WALLS_H

#include <ostream>

template<typename E> struct EnumTraits;

enum class WallDirection { NWallDir, EWallDir, SWallDir, WWallDir, 
    DWallDir, UWallDir };
enum class WallType { /*TODO*/ }; //TODO: might be class? instead of enum

std::ostream& operator<<(std::ostream& stream, const WallDirection& dir);
std::ostream& operator<<(std::ostream& stream, const WallType& type);

template<> struct EnumTraits<WallDirection> { 
    static constexpr WallDirection FIRST = WallDirection::NWallDir; 
    static constexpr WallDirection LAST = WallDirection::UWallDir;
    static constexpr WallDirection FIRST_STD = WallDirection::NWallDir; 
    static constexpr WallDirection LAST_STD = WallDirection::UWallDir;
};

#endif /* WALLS_H */

