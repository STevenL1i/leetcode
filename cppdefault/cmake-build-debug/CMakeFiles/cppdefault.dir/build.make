# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.23

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

#Suppress display of executed commands.
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
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/stevenli/Documents/leetcode/cppdefault

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/stevenli/Documents/leetcode/cppdefault/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/cppdefault.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/cppdefault.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/cppdefault.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cppdefault.dir/flags.make

CMakeFiles/cppdefault.dir/main.cpp.o: CMakeFiles/cppdefault.dir/flags.make
CMakeFiles/cppdefault.dir/main.cpp.o: ../main.cpp
CMakeFiles/cppdefault.dir/main.cpp.o: CMakeFiles/cppdefault.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/stevenli/Documents/leetcode/cppdefault/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cppdefault.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/cppdefault.dir/main.cpp.o -MF CMakeFiles/cppdefault.dir/main.cpp.o.d -o CMakeFiles/cppdefault.dir/main.cpp.o -c /Users/stevenli/Documents/leetcode/cppdefault/main.cpp

CMakeFiles/cppdefault.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cppdefault.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/stevenli/Documents/leetcode/cppdefault/main.cpp > CMakeFiles/cppdefault.dir/main.cpp.i

CMakeFiles/cppdefault.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cppdefault.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/stevenli/Documents/leetcode/cppdefault/main.cpp -o CMakeFiles/cppdefault.dir/main.cpp.s

# Object files for target cppdefault
cppdefault_OBJECTS = \
"CMakeFiles/cppdefault.dir/main.cpp.o"

# External object files for target cppdefault
cppdefault_EXTERNAL_OBJECTS =

cppdefault: CMakeFiles/cppdefault.dir/main.cpp.o
cppdefault: CMakeFiles/cppdefault.dir/build.make
cppdefault: CMakeFiles/cppdefault.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/stevenli/Documents/leetcode/cppdefault/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable cppdefault"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cppdefault.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cppdefault.dir/build: cppdefault
.PHONY : CMakeFiles/cppdefault.dir/build

CMakeFiles/cppdefault.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cppdefault.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cppdefault.dir/clean

CMakeFiles/cppdefault.dir/depend:
	cd /Users/stevenli/Documents/leetcode/cppdefault/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/stevenli/Documents/leetcode/cppdefault /Users/stevenli/Documents/leetcode/cppdefault /Users/stevenli/Documents/leetcode/cppdefault/cmake-build-debug /Users/stevenli/Documents/leetcode/cppdefault/cmake-build-debug /Users/stevenli/Documents/leetcode/cppdefault/cmake-build-debug/CMakeFiles/cppdefault.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cppdefault.dir/depend

