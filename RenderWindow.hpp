#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include <iostream>
class RenderWindow{
    public:
    RenderWindow(const char* title,int width, int height);
    void CleanUp();
    private:
    SDL_Window* window;
    SDL_Renderer* renderer;
};
