cmake_minimum_required(VERSION 3.17)
project(pri_cpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(pri_cpp main.cpp classification.cpp classification.h classification_data.cpp classification_data.h classification_initialize.cpp classification_initialize.h classification_terminate.cpp classification_terminate.h classification_types.h coder_posix_time.c coder_posix_time.h CoderTimeAPI.cpp CoderTimeAPI.h main.h minOrMax.cpp minOrMax.h ordering.cpp ordering.h sigmoid.cpp sigmoid.h rtwtypes.h sortedInsertion.cpp sortedInsertion.h tic.cpp tic.h timeKeeper.cpp timeKeeper.h tmwtypes.h toc.cpp toc.h)