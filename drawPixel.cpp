#include <SDL.h>
#include <SDL_image.h>
#include <iostream>
#include "RenderWindow.hpp"
int main(){


    if(SDL_Init(SDL_INIT_VIDEO)!=0){
        std::cout<<"SDL INIT FAILED"<< SDL_GetError()<<std::endl;
    }// check if image is working
    if(!(IMG_Init(IMG_INIT_PNG))){
        std::cout<<"SDL IMAGE FAILED"<< SDL_GetError()<<std::endl;
    }// check if image is working

    RenderWindow window("FristWindow 0.1",1000,1000);
    SDL_Texture* ballTexture = window.loadTexture("./Assets/ball.png");
    bool running = true;
    SDL_Event event;
    while (running) {
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                 running = false;
            }
        }
        window.clear();
        window.render(ballTexture);
        window.display();
    }
    window.CleanUp();
    SDL_Quit();
    std::cout << "SDL Cleaned Up" << std::endl;
}
