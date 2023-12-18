//
// Created by 张耀华 on 2023/12/15.
//

#include "player.h"

int player::create_sdl_window() {
    int quite = 1;
    SDL_Event event;
    SDL_Window *window = nullptr;
    SDL_Renderer *render = nullptr;

    SDL_Init(SDL_INIT_VIDEO);
    window = SDL_CreateWindow("SDL2 Window", 200, 200, 640, 480, SDL_WINDOW_SHOWN);
    if (!window) {
        printf("Failed to Create window ! \n");
        goto _EXIT;
    }

    render = SDL_CreateRenderer(window, -1, 0);
    if (!render) {
        printf("Failed to Create render ! \n");
        goto _D_WINDOW;
    }
    SDL_SetRenderDrawColor(render, 255, 145, 233, 255);
    SDL_RenderClear(render);
    SDL_RenderPresent(render);

    do {
        SDL_WaitEvent(&event);
        switch (event.type) {
            case SDL_QUIT:
                quite = 0;
                break;
            default:
                SDL_Log("event type is %d", event.type);
        }
    } while (quite);


    _D_WINDOW:
    SDL_DestroyWindow(window);
    _EXIT:
    SDL_Quit();
    return 0;

}
