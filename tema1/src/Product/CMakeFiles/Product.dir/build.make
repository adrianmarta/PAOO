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
include Product/CMakeFiles/Product.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Product/CMakeFiles/Product.dir/compiler_depend.make

# Include the progress variables for this target.
include Product/CMakeFiles/Product.dir/progress.make

# Include the compile flags for this target's objects.
include Product/CMakeFiles/Product.dir/flags.make

Product/CMakeFiles/Product.dir/Product.cpp.o: Product/CMakeFiles/Product.dir/flags.make
Product/CMakeFiles/Product.dir/Product.cpp.o: Product/Product.cpp
Product/CMakeFiles/Product.dir/Product.cpp.o: Product/CMakeFiles/Product.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/adimarta/paoo/tema1/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Product/CMakeFiles/Product.dir/Product.cpp.o"
	cd /home/adimarta/paoo/tema1/src/Product && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Product/CMakeFiles/Product.dir/Product.cpp.o -MF CMakeFiles/Product.dir/Product.cpp.o.d -o CMakeFiles/Product.dir/Product.cpp.o -c /home/adimarta/paoo/tema1/src/Product/Product.cpp

Product/CMakeFiles/Product.dir/Product.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Product.dir/Product.cpp.i"
	cd /home/adimarta/paoo/tema1/src/Product && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/adimarta/paoo/tema1/src/Product/Product.cpp > CMakeFiles/Product.dir/Product.cpp.i

Product/CMakeFiles/Product.dir/Product.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Product.dir/Product.cpp.s"
	cd /home/adimarta/paoo/tema1/src/Product && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/adimarta/paoo/tema1/src/Product/Product.cpp -o CMakeFiles/Product.dir/Product.cpp.s

# Object files for target Product
Product_OBJECTS = \
"CMakeFiles/Product.dir/Product.cpp.o"

# External object files for target Product
Product_EXTERNAL_OBJECTS =

Product/libProduct.a: Product/CMakeFiles/Product.dir/Product.cpp.o
Product/libProduct.a: Product/CMakeFiles/Product.dir/build.make
Product/libProduct.a: Product/CMakeFiles/Product.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/adimarta/paoo/tema1/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libProduct.a"
	cd /home/adimarta/paoo/tema1/src/Product && $(CMAKE_COMMAND) -P CMakeFiles/Product.dir/cmake_clean_target.cmake
	cd /home/adimarta/paoo/tema1/src/Product && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Product.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Product/CMakeFiles/Product.dir/build: Product/libProduct.a
.PHONY : Product/CMakeFiles/Product.dir/build

Product/CMakeFiles/Product.dir/clean:
	cd /home/adimarta/paoo/tema1/src/Product && $(CMAKE_COMMAND) -P CMakeFiles/Product.dir/cmake_clean.cmake
.PHONY : Product/CMakeFiles/Product.dir/clean

Product/CMakeFiles/Product.dir/depend:
	cd /home/adimarta/paoo/tema1/src && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/adimarta/paoo/tema1/src /home/adimarta/paoo/tema1/src/Product /home/adimarta/paoo/tema1/src /home/adimarta/paoo/tema1/src/Product /home/adimarta/paoo/tema1/src/Product/CMakeFiles/Product.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Product/CMakeFiles/Product.dir/depend

