cmake_minimum_required(VERSION 3.9)
project(InsertionSort C)

set(CMAKE_C_STANDARD 11)

add_executable(InsertionSort main.c insertionsort.h insertionsortrecursion.h)