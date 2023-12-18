#define __STDC_CONSTANT_MACROS

#ifndef SDL_PLAYER_PLAYER_H
#define SDL_PLAYER_PLAYER_H

#include <iostream>
#include <SDL.h>

extern "C" { //C++中特殊处理
#include "libavdevice/avdevice.h"
#include "libavformat/avformat.h"
#include "libavutil/log.h"
#include "libavcodec/avcodec.h"
#include "libswresample/swresample.h" // 从采样
}

#include <iostream>
#include <unistd.h>
#include <cstring>

class player {

public:
    int create_sdl_window();

};


#endif //SDL_PLAYER_PLAYER_H
