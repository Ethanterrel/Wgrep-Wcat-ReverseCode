# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\versa\CLionProjects\Project 0"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\versa\CLionProjects\Project 0\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Project_0.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Project_0.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Project_0.dir/flags.make

CMakeFiles/Project_0.dir/main.c.obj: CMakeFiles/Project_0.dir/flags.make
CMakeFiles/Project_0.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\versa\CLionProjects\Project 0\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Project_0.dir/main.c.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Project_0.dir\main.c.obj   -c "C:\Users\versa\CLionProjects\Project 0\main.c"

CMakeFiles/Project_0.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Project_0.dir/main.c.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\versa\CLionProjects\Project 0\main.c" > CMakeFiles\Project_0.dir\main.c.i

CMakeFiles/Project_0.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Project_0.dir/main.c.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\versa\CLionProjects\Project 0\main.c" -o CMakeFiles\Project_0.dir\main.c.s

# Object files for target Project_0
Project_0_OBJECTS = \
"CMakeFiles/Project_0.dir/main.c.obj"

# External object files for target Project_0
Project_0_EXTERNAL_OBJECTS =

Project_0.exe: CMakeFiles/Project_0.dir/main.c.obj
Project_0.exe: CMakeFiles/Project_0.dir/build.make
Project_0.exe: CMakeFiles/Project_0.dir/linklibs.rsp
Project_0.exe: CMakeFiles/Project_0.dir/objects1.rsp
Project_0.exe: CMakeFiles/Project_0.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\versa\CLionProjects\Project 0\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Project_0.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Project_0.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Project_0.dir/build: Project_0.exe

.PHONY : CMakeFiles/Project_0.dir/build

CMakeFiles/Project_0.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Project_0.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Project_0.dir/clean

CMakeFiles/Project_0.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\versa\CLionProjects\Project 0" "C:\Users\versa\CLionProjects\Project 0" "C:\Users\versa\CLionProjects\Project 0\cmake-build-debug" "C:\Users\versa\CLionProjects\Project 0\cmake-build-debug" "C:\Users\versa\CLionProjects\Project 0\cmake-build-debug\CMakeFiles\Project_0.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Project_0.dir/depend

