/* 
 * File:   main.cpp
 * Author: tnc02_000
 *
 * Created on August 11, 2016, 6:14 PM
 */


#include <cstdlib>
#define WIN32
#include <FL/Enumerations.H>
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>

//TODO: Temp
#include "tile.h"
#include "dungeon.h"
//End Temp

/*
 * 
 */
int main(int argc, char** argv) {
    Fl_Window *mainWindow = new Fl_Window(340, 180);
    Fl_Box *box = new Fl_Box(20,40,300,100, "Hello World!");
    
    box->box(FL_UP_BOX);
    box->labelfont(FL_BOLD+FL_ITALIC);
    box->labelsize(36);
    box->labeltype(FL_SHADOW_LABEL);
    
    mainWindow->end();
    
    mainWindow->show(argc,argv);
    
    return Fl::run();
}

