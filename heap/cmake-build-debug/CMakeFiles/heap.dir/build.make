# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = "/Users/peter/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/203.7148.70/CLion.app/Contents/bin/cmake/mac/bin/cmake"

# The command to remove a file.
RM = "/Users/peter/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/203.7148.70/CLion.app/Contents/bin/cmake/mac/bin/cmake" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/peter/Documents/Imperial/OneDrive - Imperial College London/MSc Individual Research Project/Priority-Ordered-Update/heap"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/peter/Documents/Imperial/OneDrive - Imperial College London/MSc Individual Research Project/Priority-Ordered-Update/heap/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/heap.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/heap.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/heap.dir/flags.make

CMakeFiles/heap.dir/main.cpp.o: CMakeFiles/heap.dir/flags.make
CMakeFiles/heap.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/peter/Documents/Imperial/OneDrive - Imperial College London/MSc Individual Research Project/Priority-Ordered-Update/heap/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/heap.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/heap.dir/main.cpp.o -c "/Users/peter/Documents/Imperial/OneDrive - Imperial College London/MSc Individual Research Project/Priority-Ordered-Update/heap/main.cpp"

CMakeFiles/heap.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/heap.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/peter/Documents/Imperial/OneDrive - Imperial College London/MSc Individual Research Project/Priority-Ordered-Update/heap/main.cpp" > CMakeFiles/heap.dir/main.cpp.i

CMakeFiles/heap.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/heap.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/peter/Documents/Imperial/OneDrive - Imperial College London/MSc Individual Research Project/Priority-Ordered-Update/heap/main.cpp" -o CMakeFiles/heap.dir/main.cpp.s

CMakeFiles/heap.dir/minHeap.cpp.o: CMakeFiles/heap.dir/flags.make
CMakeFiles/heap.dir/minHeap.cpp.o: ../minHeap.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/peter/Documents/Imperial/OneDrive - Imperial College London/MSc Individual Research Project/Priority-Ordered-Update/heap/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/heap.dir/minHeap.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/heap.dir/minHeap.cpp.o -c "/Users/peter/Documents/Imperial/OneDrive - Imperial College London/MSc Individual Research Project/Priority-Ordered-Update/heap/minHeap.cpp"

CMakeFiles/heap.dir/minHeap.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/heap.dir/minHeap.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/peter/Documents/Imperial/OneDrive - Imperial College London/MSc Individual Research Project/Priority-Ordered-Update/heap/minHeap.cpp" > CMakeFiles/heap.dir/minHeap.cpp.i

CMakeFiles/heap.dir/minHeap.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/heap.dir/minHeap.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/peter/Documents/Imperial/OneDrive - Imperial College London/MSc Individual Research Project/Priority-Ordered-Update/heap/minHeap.cpp" -o CMakeFiles/heap.dir/minHeap.cpp.s

# Object files for target heap
heap_OBJECTS = \
"CMakeFiles/heap.dir/main.cpp.o" \
"CMakeFiles/heap.dir/minHeap.cpp.o"

# External object files for target heap
heap_EXTERNAL_OBJECTS =

heap: CMakeFiles/heap.dir/main.cpp.o
heap: CMakeFiles/heap.dir/minHeap.cpp.o
heap: CMakeFiles/heap.dir/build.make
heap: CMakeFiles/heap.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/peter/Documents/Imperial/OneDrive - Imperial College London/MSc Individual Research Project/Priority-Ordered-Update/heap/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable heap"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/heap.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/heap.dir/build: heap

.PHONY : CMakeFiles/heap.dir/build

CMakeFiles/heap.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/heap.dir/cmake_clean.cmake
.PHONY : CMakeFiles/heap.dir/clean

CMakeFiles/heap.dir/depend:
	cd "/Users/peter/Documents/Imperial/OneDrive - Imperial College London/MSc Individual Research Project/Priority-Ordered-Update/heap/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/peter/Documents/Imperial/OneDrive - Imperial College London/MSc Individual Research Project/Priority-Ordered-Update/heap" "/Users/peter/Documents/Imperial/OneDrive - Imperial College London/MSc Individual Research Project/Priority-Ordered-Update/heap" "/Users/peter/Documents/Imperial/OneDrive - Imperial College London/MSc Individual Research Project/Priority-Ordered-Update/heap/cmake-build-debug" "/Users/peter/Documents/Imperial/OneDrive - Imperial College London/MSc Individual Research Project/Priority-Ordered-Update/heap/cmake-build-debug" "/Users/peter/Documents/Imperial/OneDrive - Imperial College London/MSc Individual Research Project/Priority-Ordered-Update/heap/cmake-build-debug/CMakeFiles/heap.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/heap.dir/depend
