#include <SDL.h>
#include <SDL_image.h>
#include <chrono>
#include <cstddef>
#include <iostream>
#include "RenderWindow.hpp"

RenderWindow::RenderWindow(const char* title,int width, int height){

    window = SDL_CreateWindow(title,SDL_WINDOWPOS_UNDEFINED,SDL_WINDOWPOS_UNDEFINED,width,height,SDL_WINDOW_SHOWN);
    if (window == NULL){
        std::cout<<"Window did not init. Error:"<< SDL_GetError()<<std::endl;
    }
    renderer =SDL_CreateRenderer(window,-1,SDL_RENDERER_ACCELERATED);
    if (renderer == NULL){
        std::cout<<"renderer did not init. Error:"<< SDL_GetError()<<std::endl;
    }
}

void RenderWindow::CleanUp() {
    if (renderer != nullptr) {
        SDL_DestroyRenderer(renderer);
        renderer = nullptr;
    }
    if (window != nullptr) {
        SDL_DestroyWindow(window);
        window = nullptr;
    }
}
