# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = /home/adimarta/paoo/tema1/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/adimarta/paoo/tema1/src

# Include any dependencies generated for this target.
include Item/CMakeFiles/Item.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Item/CMakeFiles/Item.dir/compiler_depend.make

# Include the progress variables for this target.
include Item/CMakeFiles/Item.dir/progress.make

# Include the compile flags for this target's objects.
include Item/CMakeFiles/Item.dir/flags.make

Item/CMakeFiles/Item.dir/Item.cpp.o: Item/CMakeFiles/Item.dir/flags.make
Item/CMakeFiles/Item.dir/Item.cpp.o: Item/Item.cpp
Item/CMakeFiles/Item.dir/Item.cpp.o: Item/CMakeFiles/Item.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/adimarta/paoo/tema1/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Item/CMakeFiles/Item.dir/Item.cpp.o"
	cd /home/adimarta/paoo/tema1/src/Item && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Item/CMakeFiles/Item.dir/Item.cpp.o -MF CMakeFiles/Item.dir/Item.cpp.o.d -o CMakeFiles/Item.dir/Item.cpp.o -c /home/adimarta/paoo/tema1/src/Item/Item.cpp

Item/CMakeFiles/Item.dir/Item.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Item.dir/Item.cpp.i"
	cd /home/adimarta/paoo/tema1/src/Item && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/adimarta/paoo/tema1/src/Item/Item.cpp > CMakeFiles/Item.dir/Item.cpp.i

Item/CMakeFiles/Item.dir/Item.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Item.dir/Item.cpp.s"
	cd /home/adimarta/paoo/tema1/src/Item && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/adimarta/paoo/tema1/src/Item/Item.cpp -o CMakeFiles/Item.dir/Item.cpp.s

# Object files for target Item
Item_OBJECTS = \
"CMakeFiles/Item.dir/Item.cpp.o"

# External object files for target Item
Item_EXTERNAL_OBJECTS =

Item/libItem.a: Item/CMakeFiles/Item.dir/Item.cpp.o
Item/libItem.a: Item/CMakeFiles/Item.dir/build.make
Item/libItem.a: Item/CMakeFiles/Item.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/adimarta/paoo/tema1/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libItem.a"
	cd /home/adimarta/paoo/tema1/src/Item && $(CMAKE_COMMAND) -P CMakeFiles/Item.dir/cmake_clean_target.cmake
	cd /home/adimarta/paoo/tema1/src/Item && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Item.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Item/CMakeFiles/Item.dir/build: Item/libItem.a
.PHONY : Item/CMakeFiles/Item.dir/build

Item/CMakeFiles/Item.dir/clean:
	cd /home/adimarta/paoo/tema1/src/Item && $(CMAKE_COMMAND) -P CMakeFiles/Item.dir/cmake_clean.cmake
.PHONY : Item/CMakeFiles/Item.dir/clean

Item/CMakeFiles/Item.dir/depend:
	cd /home/adimarta/paoo/tema1/src && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/adimarta/paoo/tema1/src /home/adimarta/paoo/tema1/src/Item /home/adimarta/paoo/tema1/src /home/adimarta/paoo/tema1/src/Item /home/adimarta/paoo/tema1/src/Item/CMakeFiles/Item.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Item/CMakeFiles/Item.dir/depend

