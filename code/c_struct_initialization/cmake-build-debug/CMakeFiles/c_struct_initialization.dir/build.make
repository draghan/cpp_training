# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.13

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.3.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\draghan\Desktop\training\c_struct_initialization

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\draghan\Desktop\training\c_struct_initialization\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/c_struct_initialization.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/c_struct_initialization.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/c_struct_initialization.dir/flags.make

CMakeFiles/c_struct_initialization.dir/main.c.obj: CMakeFiles/c_struct_initialization.dir/flags.make
CMakeFiles/c_struct_initialization.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\draghan\Desktop\training\c_struct_initialization\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/c_struct_initialization.dir/main.c.obj"
	"C:\Program Files\mingw-w64\x86_64-7.1.0-posix-seh-rt_v5-rev0\mingw64\bin\gcc.exe" $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\c_struct_initialization.dir\main.c.obj   -c C:\Users\draghan\Desktop\training\c_struct_initialization\main.c

CMakeFiles/c_struct_initialization.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/c_struct_initialization.dir/main.c.i"
	"C:\Program Files\mingw-w64\x86_64-7.1.0-posix-seh-rt_v5-rev0\mingw64\bin\gcc.exe" $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\draghan\Desktop\training\c_struct_initialization\main.c > CMakeFiles\c_struct_initialization.dir\main.c.i

CMakeFiles/c_struct_initialization.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/c_struct_initialization.dir/main.c.s"
	"C:\Program Files\mingw-w64\x86_64-7.1.0-posix-seh-rt_v5-rev0\mingw64\bin\gcc.exe" $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\draghan\Desktop\training\c_struct_initialization\main.c -o CMakeFiles\c_struct_initialization.dir\main.c.s

# Object files for target c_struct_initialization
c_struct_initialization_OBJECTS = \
"CMakeFiles/c_struct_initialization.dir/main.c.obj"

# External object files for target c_struct_initialization
c_struct_initialization_EXTERNAL_OBJECTS =

c_struct_initialization.exe: CMakeFiles/c_struct_initialization.dir/main.c.obj
c_struct_initialization.exe: CMakeFiles/c_struct_initialization.dir/build.make
c_struct_initialization.exe: CMakeFiles/c_struct_initialization.dir/linklibs.rsp
c_struct_initialization.exe: CMakeFiles/c_struct_initialization.dir/objects1.rsp
c_struct_initialization.exe: CMakeFiles/c_struct_initialization.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\draghan\Desktop\training\c_struct_initialization\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable c_struct_initialization.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\c_struct_initialization.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/c_struct_initialization.dir/build: c_struct_initialization.exe

.PHONY : CMakeFiles/c_struct_initialization.dir/build

CMakeFiles/c_struct_initialization.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\c_struct_initialization.dir\cmake_clean.cmake
.PHONY : CMakeFiles/c_struct_initialization.dir/clean

CMakeFiles/c_struct_initialization.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\draghan\Desktop\training\c_struct_initialization C:\Users\draghan\Desktop\training\c_struct_initialization C:\Users\draghan\Desktop\training\c_struct_initialization\cmake-build-debug C:\Users\draghan\Desktop\training\c_struct_initialization\cmake-build-debug C:\Users\draghan\Desktop\training\c_struct_initialization\cmake-build-debug\CMakeFiles\c_struct_initialization.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/c_struct_initialization.dir/depend

