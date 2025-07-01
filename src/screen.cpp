#include "../headers/screen.hpp"

Screen::Screen(int width, int height){
    Screen::width;
    Screen::height;

}

void Screen::setPixel(char pixel, vec2 position){
    vec2 screenPos = position;
    int index = 0;
    for(int y = 0; y < screenPos.y; y++){
        index += width;
    }
    for(int x = 0; x < screenPos.x; x++)
        index++;

    pixels[index] = pixel;
}

void Screen::resetPixels(){
    for(int i = 0; i < width * height; i++){
        pixels[i] = 'a';
    }
}
void Screen::draw(){
    
}