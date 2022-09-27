cmake_minimum_required(VERSION 3.20)
project(playgound1)

set(CMAKE_CXX_STANDARD 20)

add_executable(playgound1 main.cpp Core.cpp Core.hpp Player.cpp Player.hpp Game.cpp Game.hpp)
