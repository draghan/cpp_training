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
CMAKE_SOURCE_DIR = C:\Users\draghan\Desktop\training\floating_point_conversions

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\draghan\Desktop\training\floating_point_conversions\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/floating_point_conversions.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/floating_point_conversions.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/floating_point_conversions.dir/flags.make

CMakeFiles/floating_point_conversions.dir/main.cpp.obj: CMakeFiles/floating_point_conversions.dir/flags.make
CMakeFiles/floating_point_conversions.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\draghan\Desktop\training\floating_point_conversions\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/floating_point_conversions.dir/main.cpp.obj"
	"C:\Program Files\mingw-w64\x86_64-7.1.0-posix-seh-rt_v5-rev0\mingw64\bin\g++.exe"  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\floating_point_conversions.dir\main.cpp.obj -c C:\Users\draghan\Desktop\training\floating_point_conversions\main.cpp

CMakeFiles/floating_point_conversions.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/floating_point_conversions.dir/main.cpp.i"
	"C:\Program Files\mingw-w64\x86_64-7.1.0-posix-seh-rt_v5-rev0\mingw64\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\draghan\Desktop\training\floating_point_conversions\main.cpp > CMakeFiles\floating_point_conversions.dir\main.cpp.i

CMakeFiles/floating_point_conversions.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/floating_point_conversions.dir/main.cpp.s"
	"C:\Program Files\mingw-w64\x86_64-7.1.0-posix-seh-rt_v5-rev0\mingw64\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\draghan\Desktop\training\floating_point_conversions\main.cpp -o CMakeFiles\floating_point_conversions.dir\main.cpp.s

# Object files for target floating_point_conversions
floating_point_conversions_OBJECTS = \
"CMakeFiles/floating_point_conversions.dir/main.cpp.obj"

# External object files for target floating_point_conversions
floating_point_conversions_EXTERNAL_OBJECTS =

floating_point_conversions.exe: CMakeFiles/floating_point_conversions.dir/main.cpp.obj
floating_point_conversions.exe: CMakeFiles/floating_point_conversions.dir/build.make
floating_point_conversions.exe: CMakeFiles/floating_point_conversions.dir/linklibs.rsp
floating_point_conversions.exe: CMakeFiles/floating_point_conversions.dir/objects1.rsp
floating_point_conversions.exe: CMakeFiles/floating_point_conversions.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\draghan\Desktop\training\floating_point_conversions\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable floating_point_conversions.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\floating_point_conversions.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/floating_point_conversions.dir/build: floating_point_conversions.exe

.PHONY : CMakeFiles/floating_point_conversions.dir/build

CMakeFiles/floating_point_conversions.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\floating_point_conversions.dir\cmake_clean.cmake
.PHONY : CMakeFiles/floating_point_conversions.dir/clean

CMakeFiles/floating_point_conversions.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\draghan\Desktop\training\floating_point_conversions C:\Users\draghan\Desktop\training\floating_point_conversions C:\Users\draghan\Desktop\training\floating_point_conversions\cmake-build-debug C:\Users\draghan\Desktop\training\floating_point_conversions\cmake-build-debug C:\Users\draghan\Desktop\training\floating_point_conversions\cmake-build-debug\CMakeFiles\floating_point_conversions.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/floating_point_conversions.dir/depend
