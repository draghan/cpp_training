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
CMAKE_SOURCE_DIR = H:\training_cpp\code\pointer_example_2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = H:\training_cpp\code\pointer_example_2\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/pointer_example_2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/pointer_example_2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/pointer_example_2.dir/flags.make

CMakeFiles/pointer_example_2.dir/main.cpp.obj: CMakeFiles/pointer_example_2.dir/flags.make
CMakeFiles/pointer_example_2.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=H:\training_cpp\code\pointer_example_2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/pointer_example_2.dir/main.cpp.obj"
	"C:\Program Files\mingw-w64\x86_64-7.1.0-posix-seh-rt_v5-rev0\mingw64\bin\g++.exe"  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\pointer_example_2.dir\main.cpp.obj -c H:\training_cpp\code\pointer_example_2\main.cpp

CMakeFiles/pointer_example_2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pointer_example_2.dir/main.cpp.i"
	"C:\Program Files\mingw-w64\x86_64-7.1.0-posix-seh-rt_v5-rev0\mingw64\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E H:\training_cpp\code\pointer_example_2\main.cpp > CMakeFiles\pointer_example_2.dir\main.cpp.i

CMakeFiles/pointer_example_2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pointer_example_2.dir/main.cpp.s"
	"C:\Program Files\mingw-w64\x86_64-7.1.0-posix-seh-rt_v5-rev0\mingw64\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S H:\training_cpp\code\pointer_example_2\main.cpp -o CMakeFiles\pointer_example_2.dir\main.cpp.s

# Object files for target pointer_example_2
pointer_example_2_OBJECTS = \
"CMakeFiles/pointer_example_2.dir/main.cpp.obj"

# External object files for target pointer_example_2
pointer_example_2_EXTERNAL_OBJECTS =

pointer_example_2.exe: CMakeFiles/pointer_example_2.dir/main.cpp.obj
pointer_example_2.exe: CMakeFiles/pointer_example_2.dir/build.make
pointer_example_2.exe: CMakeFiles/pointer_example_2.dir/linklibs.rsp
pointer_example_2.exe: CMakeFiles/pointer_example_2.dir/objects1.rsp
pointer_example_2.exe: CMakeFiles/pointer_example_2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=H:\training_cpp\code\pointer_example_2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable pointer_example_2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\pointer_example_2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/pointer_example_2.dir/build: pointer_example_2.exe

.PHONY : CMakeFiles/pointer_example_2.dir/build

CMakeFiles/pointer_example_2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\pointer_example_2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/pointer_example_2.dir/clean

CMakeFiles/pointer_example_2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" H:\training_cpp\code\pointer_example_2 H:\training_cpp\code\pointer_example_2 H:\training_cpp\code\pointer_example_2\cmake-build-debug H:\training_cpp\code\pointer_example_2\cmake-build-debug H:\training_cpp\code\pointer_example_2\cmake-build-debug\CMakeFiles\pointer_example_2.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/pointer_example_2.dir/depend

