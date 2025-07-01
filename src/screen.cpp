#include "../headers/screen.hpp"

Screen::Screen(int width, int height){
    Screen::width;
    Screen::height;
    
    //allocate enough space including padding for newline
    pixels = (char*) malloc(sizeof(char) * (width * height + height + 1));

    //set end to null char
    pixels[width * height + height + 1] = '\0';

    //set every nth pixel to newline
    for(int y = 1; y <= height; y++){
        pixels[width * y] = '\n';
    }

}

void Screen::setPixel(char pixel, vec2 position){
    int index = 0;
    for(int y = 0; y < position.y; y++){
        index += width;    //extra index due to newlines
    }
    for(int x = 0; x < position.x; x++){
        index++;
    }

    pixels[index] = pixel;
}