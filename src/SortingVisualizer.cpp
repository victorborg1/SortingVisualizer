#include "SortingVisualizer.h"

SortingVisualizer::SortingVisualizer()
{
}

SortingVisualizer::~SortingVisualizer()
{
    cleanup();
}

void SortingVisualizer::run()
{
    std::cout << "run" << std::endl;
}

void SortingVisualizer::cleanup()
{
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
}