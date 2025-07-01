#include <iostream>
#include "headers/screen.hpp"
#include "src/screen.cpp"

int main(){
    Screen screen(8, 8);
    screen.resetPixels();


    std::cout <<screen.pixels << std::endl;
    //screen.draw();

    return 0;
}