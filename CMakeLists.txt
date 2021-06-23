cmake_minimum_required(VERSION 3.17)
project(ex3)

set(CMAKE_CXX_STANDARD 11)

add_executable(ex3 main.cpp Sim_object.h Port.cpp Port.h Controller.cpp Controller.h ship.cpp ship.h Freighter.cpp Freighter.h Patrol_boat.cpp Patrol_boat.h Cruiser.cpp Cruiser.h)