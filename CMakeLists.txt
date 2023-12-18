cmake_minimum_required(VERSION 3.26)
project(sdl_player)

set(CMAKE_CXX_STANDARD 14)
# 设置运行架构
set(CMAKE_OSX_ARCHITECTURES "arm64")

#添加sdl头文件
include_directories(/usr/local/sdl/include)
link_directories(/usr/local/lib)

#添加ffmpeg头文件
include_directories(/usr/local/ffmpeg/include)
link_directories(/usr/local/ffmpeg/lib)


add_executable(sdl_player main.cpp
        player.cpp
        player.h
)

target_link_libraries(sdl_player
        avcodec
        avdevice
        avfilter
        avformat
        avutil
        swresample
        swscale
        SDL2
)