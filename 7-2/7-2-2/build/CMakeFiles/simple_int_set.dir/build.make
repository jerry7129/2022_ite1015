# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/kim/2022_ite1015_2022083409/7-2/7-2-2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kim/2022_ite1015_2022083409/7-2/7-2-2/build

# Include any dependencies generated for this target.
include CMakeFiles/simple_int_set.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/simple_int_set.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/simple_int_set.dir/flags.make

CMakeFiles/simple_int_set.dir/main.cpp.o: CMakeFiles/simple_int_set.dir/flags.make
CMakeFiles/simple_int_set.dir/main.cpp.o: main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kim/2022_ite1015_2022083409/7-2/7-2-2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/simple_int_set.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/simple_int_set.dir/main.cpp.o -c /home/kim/2022_ite1015_2022083409/7-2/7-2-2/build/main.cpp

CMakeFiles/simple_int_set.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/simple_int_set.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kim/2022_ite1015_2022083409/7-2/7-2-2/build/main.cpp > CMakeFiles/simple_int_set.dir/main.cpp.i

CMakeFiles/simple_int_set.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/simple_int_set.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kim/2022_ite1015_2022083409/7-2/7-2-2/build/main.cpp -o CMakeFiles/simple_int_set.dir/main.cpp.s

CMakeFiles/simple_int_set.dir/setfunc.cpp.o: CMakeFiles/simple_int_set.dir/flags.make
CMakeFiles/simple_int_set.dir/setfunc.cpp.o: setfunc.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kim/2022_ite1015_2022083409/7-2/7-2-2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/simple_int_set.dir/setfunc.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/simple_int_set.dir/setfunc.cpp.o -c /home/kim/2022_ite1015_2022083409/7-2/7-2-2/build/setfunc.cpp

CMakeFiles/simple_int_set.dir/setfunc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/simple_int_set.dir/setfunc.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kim/2022_ite1015_2022083409/7-2/7-2-2/build/setfunc.cpp > CMakeFiles/simple_int_set.dir/setfunc.cpp.i

CMakeFiles/simple_int_set.dir/setfunc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/simple_int_set.dir/setfunc.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kim/2022_ite1015_2022083409/7-2/7-2-2/build/setfunc.cpp -o CMakeFiles/simple_int_set.dir/setfunc.cpp.s

# Object files for target simple_int_set
simple_int_set_OBJECTS = \
"CMakeFiles/simple_int_set.dir/main.cpp.o" \
"CMakeFiles/simple_int_set.dir/setfunc.cpp.o"

# External object files for target simple_int_set
simple_int_set_EXTERNAL_OBJECTS =

simple_int_set: CMakeFiles/simple_int_set.dir/main.cpp.o
simple_int_set: CMakeFiles/simple_int_set.dir/setfunc.cpp.o
simple_int_set: CMakeFiles/simple_int_set.dir/build.make
simple_int_set: CMakeFiles/simple_int_set.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kim/2022_ite1015_2022083409/7-2/7-2-2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable simple_int_set"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/simple_int_set.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/simple_int_set.dir/build: simple_int_set

.PHONY : CMakeFiles/simple_int_set.dir/build

CMakeFiles/simple_int_set.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/simple_int_set.dir/cmake_clean.cmake
.PHONY : CMakeFiles/simple_int_set.dir/clean

CMakeFiles/simple_int_set.dir/depend:
	cd /home/kim/2022_ite1015_2022083409/7-2/7-2-2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kim/2022_ite1015_2022083409/7-2/7-2-2 /home/kim/2022_ite1015_2022083409/7-2/7-2-2 /home/kim/2022_ite1015_2022083409/7-2/7-2-2/build /home/kim/2022_ite1015_2022083409/7-2/7-2-2/build /home/kim/2022_ite1015_2022083409/7-2/7-2-2/build/CMakeFiles/simple_int_set.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/simple_int_set.dir/depend
