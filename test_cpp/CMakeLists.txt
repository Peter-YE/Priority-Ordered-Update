cmake_minimum_required(VERSION 3.17)
project(test_cpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(test_cpp main.cpp)#tmwtypes.h toc.cpp toc.h mat.h matrix.h mex.h)

target_link_libraries(test_cpp /Applications/MATLAB_R2021a.app/bin/maci64/libmat.dylib)
target_link_libraries(test_cpp /Applications/MATLAB_R2021a.app/bin/maci64/libmx.dylib)