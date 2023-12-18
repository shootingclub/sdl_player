#include <iostream>
#include "player.h"


int main() {
//    std::cout << "Hello, World!" << std::endl;
//    av_log_set_level(AV_LOG_DEBUG);//设置日志级别
//    av_log(nullptr, AV_LOG_INFO, "hello ffmpeg\n");//打印日志
//    const char *info = avcodec_configuration();//avcodec配置信息
//    av_log(nullptr, AV_LOG_DEBUG, "配置:%s", info);

    player player;
    player.create_sdl_window();



//    SDL_Window *window = NULL;          // 窗口
//    SDL_Renderer *renderer = NULL;      // 渲染器
//    SDL_Texture *texture = NULL;        // 纹理
//
//    SDL_Init(SDL_INIT_VIDEO);
//
//    // 创建窗口
//    window = SDL_CreateWindow("Window Title",
//                              SDL_WINDOWPOS_UNDEFINED,
//                              SDL_WINDOWPOS_UNDEFINED,
//                              640,
//                              480,
//                              SDL_WINDOW_OPENGL | SDL_WINDOW_RESIZABLE);
//    if (NULL == window) {
//        printf("Create Window error: %s\n", SDL_GetError());
//        return -1;
//    }
//
//    // 创建渲染器(一个窗口可有多个渲染器)
//    renderer = SDL_CreateRenderer(window, -1, 0);
//    if (NULL == renderer) {
//        printf("Create Renderer error: %s\n", SDL_GetError());
//        // 销毁窗口，释放资源
//        SDL_DestroyWindow(window);
//        SDL_Quit();
//        return -1;
//    }
//
//    // 基于渲染器创建纹理
//    texture = SDL_CreateTexture(renderer,
//                                SDL_PIXELFORMAT_RGBA8888,
//                                SDL_TEXTUREACCESS_TARGET,
//                                640,
//                                480);
//    if (NULL == texture) {
//        printf("Create Texture error: %s\n", SDL_GetError());
//        // 销毁渲染器 窗口 释放资源
//        SDL_DestroyRenderer(renderer);
//        SDL_DestroyWindow(window);
//        SDL_Quit();
//        return -1;
//    }
//
//    int showCnt = 0;    // 显示次数
//    int run = 1;        // 循环退出条件
//    SDL_Rect rect;      // 定义一个SDL矩形
//    rect.w = 50;
//    rect.h = 50;
//
//    while (run) {
//        // 随机rect的位置
//        rect.x = rand() % 600;
//        rect.y = rand() % 400;
//
//        // 设置渲染目标为纹理
//        SDL_SetRenderTarget(renderer, texture);
//        // 设置渲染绘制颜色
//        SDL_SetRenderDrawColor(renderer, 255, 0, 255, 255);
//        // 刷新渲染
//        SDL_RenderClear(renderer);
//
//        // 设置渲染绘制颜色
//        SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);
//        // 绘制矩形
//        SDL_RenderDrawRect(renderer, &rect);
//        // 绘制填充矩形
//        SDL_RenderFillRect(renderer, &rect);
//
//        // 恢复渲染目标为窗口
//        SDL_SetRenderTarget(renderer, NULL);
//        SDL_RenderCopy(renderer, texture, NULL, NULL);
//
//        // 显示纹理
//        SDL_RenderPresent(renderer);
////        SDL_Delay(300);
//        bool quit = false;
//        SDL_Event e;
//        while (!quit) {
//            while (SDL_PollEvent(&e)) {
//                if (e.type == SDL_QUIT) {
//                    quit = true;
//                }
//            }
//        }
//
//        if (showCnt++ >= 30)
//            run = 0;
//    }
//
//    // 销毁 纹理 渲染器 窗口，释放资源
//    SDL_DestroyTexture(texture);
//    SDL_DestroyRenderer(renderer);
//    SDL_DestroyWindow(window);
//    SDL_Quit();
//
//    return 0;


}


