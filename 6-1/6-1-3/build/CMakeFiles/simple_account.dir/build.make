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
CMAKE_SOURCE_DIR = /home/kim/2022_ite1015_2022083409/6-1/6-1-3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kim/2022_ite1015_2022083409/6-1/6-1-3/build

# Include any dependencies generated for this target.
include CMakeFiles/simple_account.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/simple_account.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/simple_account.dir/flags.make

CMakeFiles/simple_account.dir/main.cpp.o: CMakeFiles/simple_account.dir/flags.make
CMakeFiles/simple_account.dir/main.cpp.o: main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kim/2022_ite1015_2022083409/6-1/6-1-3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/simple_account.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/simple_account.dir/main.cpp.o -c /home/kim/2022_ite1015_2022083409/6-1/6-1-3/build/main.cpp

CMakeFiles/simple_account.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/simple_account.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kim/2022_ite1015_2022083409/6-1/6-1-3/build/main.cpp > CMakeFiles/simple_account.dir/main.cpp.i

CMakeFiles/simple_account.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/simple_account.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kim/2022_ite1015_2022083409/6-1/6-1-3/build/main.cpp -o CMakeFiles/simple_account.dir/main.cpp.s

CMakeFiles/simple_account.dir/accounts.cpp.o: CMakeFiles/simple_account.dir/flags.make
CMakeFiles/simple_account.dir/accounts.cpp.o: accounts.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kim/2022_ite1015_2022083409/6-1/6-1-3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/simple_account.dir/accounts.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/simple_account.dir/accounts.cpp.o -c /home/kim/2022_ite1015_2022083409/6-1/6-1-3/build/accounts.cpp

CMakeFiles/simple_account.dir/accounts.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/simple_account.dir/accounts.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kim/2022_ite1015_2022083409/6-1/6-1-3/build/accounts.cpp > CMakeFiles/simple_account.dir/accounts.cpp.i

CMakeFiles/simple_account.dir/accounts.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/simple_account.dir/accounts.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kim/2022_ite1015_2022083409/6-1/6-1-3/build/accounts.cpp -o CMakeFiles/simple_account.dir/accounts.cpp.s

# Object files for target simple_account
simple_account_OBJECTS = \
"CMakeFiles/simple_account.dir/main.cpp.o" \
"CMakeFiles/simple_account.dir/accounts.cpp.o"

# External object files for target simple_account
simple_account_EXTERNAL_OBJECTS =

simple_account: CMakeFiles/simple_account.dir/main.cpp.o
simple_account: CMakeFiles/simple_account.dir/accounts.cpp.o
simple_account: CMakeFiles/simple_account.dir/build.make
simple_account: CMakeFiles/simple_account.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kim/2022_ite1015_2022083409/6-1/6-1-3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable simple_account"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/simple_account.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/simple_account.dir/build: simple_account

.PHONY : CMakeFiles/simple_account.dir/build

CMakeFiles/simple_account.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/simple_account.dir/cmake_clean.cmake
.PHONY : CMakeFiles/simple_account.dir/clean

CMakeFiles/simple_account.dir/depend:
	cd /home/kim/2022_ite1015_2022083409/6-1/6-1-3/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kim/2022_ite1015_2022083409/6-1/6-1-3 /home/kim/2022_ite1015_2022083409/6-1/6-1-3 /home/kim/2022_ite1015_2022083409/6-1/6-1-3/build /home/kim/2022_ite1015_2022083409/6-1/6-1-3/build /home/kim/2022_ite1015_2022083409/6-1/6-1-3/build/CMakeFiles/simple_account.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/simple_account.dir/depend

