cmake_minimum_required(VERSION 3.28)
project(Search C)

set(CMAKE_C_STANDARD 23)

add_executable(Search main.c
        SearchMethods.h
        SeaechMethods.c)
