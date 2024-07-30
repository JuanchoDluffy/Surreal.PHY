#include <SDL.h>
#include <SDL_image.h>
#include <iostream>
#include "RenderWindow.hpp"
int main(){

    SDL_Init(SDL_INIT_VIDEO);
    if(!(IMG_Init(IMG_INIT_PNG))){
        std::cout<<"SDL IMAGE FAILED"<< SDL_GetError()<<std::endl;
    }// check if image is working

    RenderWindow window("FristWindow 0.1",1280,700);
    bool running = true;
    SDL_Event event;
    while (running) {
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                running = false;
            }
        }
        SDL_Delay(100); // Delay to prevent high CPU usage
    }
    window.CleanUp();
    SDL_Quit();
    std::cout << "SDL Cleaned Up" << std::endl;
}
