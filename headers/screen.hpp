#ifndef SCREEN_H
#define SCREEN_H

#include <iostream>
#include <string>
#include "matrix.hpp"


class Screen{
public:
    int width;
    int height;

    char* pixels;

    Screen(int width, int height);
    void setPixel(char pixel, vec2 position);
    void resetPixels();
    void draw();
};



#endif

