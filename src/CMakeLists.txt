cmake_minimum_required(VERSION 3.31.4)

project(RPG)

add_executable(${PROJECT_NAME} main.cpp die.cpp ../include/die.h character.cpp ../include/character.h)

target_include_directories(${PROJECT_NAME} PRIVATE ../include)

install(TARGETS ${PROJECT_NAME} DESTINATION bin)
