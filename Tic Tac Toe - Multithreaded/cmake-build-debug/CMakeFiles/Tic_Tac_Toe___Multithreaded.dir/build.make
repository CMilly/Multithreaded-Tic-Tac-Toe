# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = /cygdrive/c/Users/cameron/.CLion2018.3/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/cameron/.CLion2018.3/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/cygdrive/c/Users/cameron/Documents/Development/C++/Tic Tac Toe - Multithreaded"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/cygdrive/c/Users/cameron/Documents/Development/C++/Tic Tac Toe - Multithreaded/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Tic_Tac_Toe___Multithreaded.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Tic_Tac_Toe___Multithreaded.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Tic_Tac_Toe___Multithreaded.dir/flags.make

CMakeFiles/Tic_Tac_Toe___Multithreaded.dir/main.cpp.o: CMakeFiles/Tic_Tac_Toe___Multithreaded.dir/flags.make
CMakeFiles/Tic_Tac_Toe___Multithreaded.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/c/Users/cameron/Documents/Development/C++/Tic Tac Toe - Multithreaded/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Tic_Tac_Toe___Multithreaded.dir/main.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Tic_Tac_Toe___Multithreaded.dir/main.cpp.o -c "/cygdrive/c/Users/cameron/Documents/Development/C++/Tic Tac Toe - Multithreaded/main.cpp"

CMakeFiles/Tic_Tac_Toe___Multithreaded.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Tic_Tac_Toe___Multithreaded.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/c/Users/cameron/Documents/Development/C++/Tic Tac Toe - Multithreaded/main.cpp" > CMakeFiles/Tic_Tac_Toe___Multithreaded.dir/main.cpp.i

CMakeFiles/Tic_Tac_Toe___Multithreaded.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Tic_Tac_Toe___Multithreaded.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/c/Users/cameron/Documents/Development/C++/Tic Tac Toe - Multithreaded/main.cpp" -o CMakeFiles/Tic_Tac_Toe___Multithreaded.dir/main.cpp.s

# Object files for target Tic_Tac_Toe___Multithreaded
Tic_Tac_Toe___Multithreaded_OBJECTS = \
"CMakeFiles/Tic_Tac_Toe___Multithreaded.dir/main.cpp.o"

# External object files for target Tic_Tac_Toe___Multithreaded
Tic_Tac_Toe___Multithreaded_EXTERNAL_OBJECTS =

Tic_Tac_Toe___Multithreaded.exe: CMakeFiles/Tic_Tac_Toe___Multithreaded.dir/main.cpp.o
Tic_Tac_Toe___Multithreaded.exe: CMakeFiles/Tic_Tac_Toe___Multithreaded.dir/build.make
Tic_Tac_Toe___Multithreaded.exe: CMakeFiles/Tic_Tac_Toe___Multithreaded.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/cygdrive/c/Users/cameron/Documents/Development/C++/Tic Tac Toe - Multithreaded/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Tic_Tac_Toe___Multithreaded.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Tic_Tac_Toe___Multithreaded.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Tic_Tac_Toe___Multithreaded.dir/build: Tic_Tac_Toe___Multithreaded.exe

.PHONY : CMakeFiles/Tic_Tac_Toe___Multithreaded.dir/build

CMakeFiles/Tic_Tac_Toe___Multithreaded.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Tic_Tac_Toe___Multithreaded.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Tic_Tac_Toe___Multithreaded.dir/clean

CMakeFiles/Tic_Tac_Toe___Multithreaded.dir/depend:
	cd "/cygdrive/c/Users/cameron/Documents/Development/C++/Tic Tac Toe - Multithreaded/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/cygdrive/c/Users/cameron/Documents/Development/C++/Tic Tac Toe - Multithreaded" "/cygdrive/c/Users/cameron/Documents/Development/C++/Tic Tac Toe - Multithreaded" "/cygdrive/c/Users/cameron/Documents/Development/C++/Tic Tac Toe - Multithreaded/cmake-build-debug" "/cygdrive/c/Users/cameron/Documents/Development/C++/Tic Tac Toe - Multithreaded/cmake-build-debug" "/cygdrive/c/Users/cameron/Documents/Development/C++/Tic Tac Toe - Multithreaded/cmake-build-debug/CMakeFiles/Tic_Tac_Toe___Multithreaded.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Tic_Tac_Toe___Multithreaded.dir/depend

