# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/zerosharp/projects/semestr3/lab4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/zerosharp/projects/semestr3/lab4/build

# Include any dependencies generated for this target.
include CMakeFiles/change_of_strategy.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/change_of_strategy.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/change_of_strategy.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/change_of_strategy.dir/flags.make

CMakeFiles/change_of_strategy.dir/src/change_of_strategy.cpp.o: CMakeFiles/change_of_strategy.dir/flags.make
CMakeFiles/change_of_strategy.dir/src/change_of_strategy.cpp.o: /home/zerosharp/projects/semestr3/lab4/src/change_of_strategy.cpp
CMakeFiles/change_of_strategy.dir/src/change_of_strategy.cpp.o: CMakeFiles/change_of_strategy.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/zerosharp/projects/semestr3/lab4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/change_of_strategy.dir/src/change_of_strategy.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/change_of_strategy.dir/src/change_of_strategy.cpp.o -MF CMakeFiles/change_of_strategy.dir/src/change_of_strategy.cpp.o.d -o CMakeFiles/change_of_strategy.dir/src/change_of_strategy.cpp.o -c /home/zerosharp/projects/semestr3/lab4/src/change_of_strategy.cpp

CMakeFiles/change_of_strategy.dir/src/change_of_strategy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/change_of_strategy.dir/src/change_of_strategy.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zerosharp/projects/semestr3/lab4/src/change_of_strategy.cpp > CMakeFiles/change_of_strategy.dir/src/change_of_strategy.cpp.i

CMakeFiles/change_of_strategy.dir/src/change_of_strategy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/change_of_strategy.dir/src/change_of_strategy.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zerosharp/projects/semestr3/lab4/src/change_of_strategy.cpp -o CMakeFiles/change_of_strategy.dir/src/change_of_strategy.cpp.s

# Object files for target change_of_strategy
change_of_strategy_OBJECTS = \
"CMakeFiles/change_of_strategy.dir/src/change_of_strategy.cpp.o"

# External object files for target change_of_strategy
change_of_strategy_EXTERNAL_OBJECTS =

change_of_strategy: CMakeFiles/change_of_strategy.dir/src/change_of_strategy.cpp.o
change_of_strategy: CMakeFiles/change_of_strategy.dir/build.make
change_of_strategy: CMakeFiles/change_of_strategy.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/zerosharp/projects/semestr3/lab4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable change_of_strategy"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/change_of_strategy.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/change_of_strategy.dir/build: change_of_strategy
.PHONY : CMakeFiles/change_of_strategy.dir/build

CMakeFiles/change_of_strategy.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/change_of_strategy.dir/cmake_clean.cmake
.PHONY : CMakeFiles/change_of_strategy.dir/clean

CMakeFiles/change_of_strategy.dir/depend:
	cd /home/zerosharp/projects/semestr3/lab4/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/zerosharp/projects/semestr3/lab4 /home/zerosharp/projects/semestr3/lab4 /home/zerosharp/projects/semestr3/lab4/build /home/zerosharp/projects/semestr3/lab4/build /home/zerosharp/projects/semestr3/lab4/build/CMakeFiles/change_of_strategy.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/change_of_strategy.dir/depend
