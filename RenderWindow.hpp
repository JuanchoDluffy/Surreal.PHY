#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include <iostream>
class RenderWindow{
    public:
    RenderWindow(const char* title,int width, int height);
    SDL_Texture* loadTexture(const char* filePath);
    void clear();
    void render(SDL_Texture* texture);
    void display();
    void CleanUp();
    private:
    SDL_Window* window;
    SDL_Renderer* renderer;
};
