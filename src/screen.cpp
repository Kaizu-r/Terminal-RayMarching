#include "../headers/screen.hpp"

Screen::Screen(int width, int height){
    Screen::width;
    Screen::height;
    
    //allocate enough space including padding for newline
    pixels = (char*) malloc(sizeof(char) * (width * height + 1));

    //set end to null char
    pixels[width * height] = '\0';

}

void Screen::setPixel(char pixel, vec2 position){
    vec2 screenPos = vec2{(float) (position.x + width/2.0), (float) (position.y - height/2.0) };
    int index = 0;
    for(int y = 0; y < screenPos.y; y++){
        index += width;
    }
    index--;
    for(int x = 0; x < screenPos.x; x++)
        index++;

    pixels[index] = pixel;
}

void Screen::resetPixels(){
    for(int i = 0; i < width * height; i++){
        pixels[i] = ' ';
    }
}
void Screen::draw(){
    std::string allPixels = pixels;
    for(int i = 0; i < height; i++){
        std::cout << allPixels.substr(i * width, i + width - 1);
    }
}