# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/eli.p561/CLionProjects/pointers

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/eli.p561/CLionProjects/pointers/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/pointers.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/pointers.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/pointers.dir/flags.make

CMakeFiles/pointers.dir/main.cpp.o: CMakeFiles/pointers.dir/flags.make
CMakeFiles/pointers.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/eli.p561/CLionProjects/pointers/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/pointers.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/pointers.dir/main.cpp.o -c /Users/eli.p561/CLionProjects/pointers/main.cpp

CMakeFiles/pointers.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pointers.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/eli.p561/CLionProjects/pointers/main.cpp > CMakeFiles/pointers.dir/main.cpp.i

CMakeFiles/pointers.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pointers.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/eli.p561/CLionProjects/pointers/main.cpp -o CMakeFiles/pointers.dir/main.cpp.s

# Object files for target pointers
pointers_OBJECTS = \
"CMakeFiles/pointers.dir/main.cpp.o"

# External object files for target pointers
pointers_EXTERNAL_OBJECTS =

pointers: CMakeFiles/pointers.dir/main.cpp.o
pointers: CMakeFiles/pointers.dir/build.make
pointers: CMakeFiles/pointers.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/eli.p561/CLionProjects/pointers/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable pointers"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/pointers.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/pointers.dir/build: pointers

.PHONY : CMakeFiles/pointers.dir/build

CMakeFiles/pointers.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/pointers.dir/cmake_clean.cmake
.PHONY : CMakeFiles/pointers.dir/clean

CMakeFiles/pointers.dir/depend:
	cd /Users/eli.p561/CLionProjects/pointers/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/eli.p561/CLionProjects/pointers /Users/eli.p561/CLionProjects/pointers /Users/eli.p561/CLionProjects/pointers/cmake-build-debug /Users/eli.p561/CLionProjects/pointers/cmake-build-debug /Users/eli.p561/CLionProjects/pointers/cmake-build-debug/CMakeFiles/pointers.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/pointers.dir/depend

