#pragma once

#include <SDL.h>
#include <iostream>
#include "windowdata.h"

class SortingVisualizer
{
public:
    SortingVisualizer();
    ~SortingVisualizer();
    void run();

private:
    void initSDL();
    void processEvents();
    void update();
    void render();
    void cleanup();

    SDL_Window *window;
    SDL_Renderer *renderer;
    SDL_Event event;
    Uint32 frameStart;
    bool running;
    int frameTime;
};