cmake_minimum_required(VERSION 3.17)
project(pri_cpp_batch)

set(CMAKE_CXX_STANDARD 14)

#set(LIB_MAT mat)
#add_library(${LIB_MAT} SHARED IMPORTED)
#set_target_properties(${LIB_MAT} PROPERTIES IMPORTED_LOCATION /Applications/MATLAB_R2021a.app/bin/maci64/libmat.dylib)
#
#set(LIB_MEX mex)
#add_library(${LIB_MEX} SHARED IMPORTED)
#set_target_properties(${LIB_MEX} PROPERTIES IMPORTED_LOCATION /Applications/MATLAB_R2021a.app/extern/bin/maci64/libmex.dylib)
#
#set(LIB_MX mx)
#add_library(${LIB_MX} SHARED IMPORTED)
#set_target_properties(${LIB_MX} PROPERTIES IMPORTED_LOCATION /Applications/MATLAB_R2021a.app/bin/maci64/libmx.dylib)

add_executable(pri_cpp main.cpp classification.cpp classification.h classification_data.cpp classification_data.h coder_posix_time.c coder_posix_time.h CoderTimeAPI.cpp CoderTimeAPI.h main.h minOrMax.cpp minOrMax.h ordering.cpp ordering.h rtwtypes.h tic.cpp tic.h timeKeeper.cpp timeKeeper.h tmwtypes.h toc.cpp toc.h minHeap.cpp minHeap.h maskedClassification.cpp maskedClassification.h)

target_link_libraries(pri_cpp /Applications/MATLAB_R2021a.app/bin/maci64/libmat.dylib)
target_link_libraries(pri_cpp /Applications/MATLAB_R2021a.app/bin/maci64/libmx.dylib)
#target_link_libraries(pri_cpp /Applications/MATLAB_R2021a.app/extern/bin/maci64/libmex.dylib)