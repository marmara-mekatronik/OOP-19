# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = "D:\cLion\CLion 2019.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\cLion\CLion 2019.2.3\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Casper\Desktop\OOP-19\Ornekler\Ulas_Eren_CINAR\sinif_odevi

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Casper\Desktop\OOP-19\Ornekler\Ulas_Eren_CINAR\sinif_odevi\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/snf_odevi.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/snf_odevi.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/snf_odevi.dir/flags.make

CMakeFiles/snf_odevi.dir/main.cpp.obj: CMakeFiles/snf_odevi.dir/flags.make
CMakeFiles/snf_odevi.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Casper\Desktop\OOP-19\Ornekler\Ulas_Eren_CINAR\sinif_odevi\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/snf_odevi.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\snf_odevi.dir\main.cpp.obj -c C:\Users\Casper\Desktop\OOP-19\Ornekler\Ulas_Eren_CINAR\sinif_odevi\main.cpp

CMakeFiles/snf_odevi.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/snf_odevi.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Casper\Desktop\OOP-19\Ornekler\Ulas_Eren_CINAR\sinif_odevi\main.cpp > CMakeFiles\snf_odevi.dir\main.cpp.i

CMakeFiles/snf_odevi.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/snf_odevi.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Casper\Desktop\OOP-19\Ornekler\Ulas_Eren_CINAR\sinif_odevi\main.cpp -o CMakeFiles\snf_odevi.dir\main.cpp.s

# Object files for target snf_odevi
snf_odevi_OBJECTS = \
"CMakeFiles/snf_odevi.dir/main.cpp.obj"

# External object files for target snf_odevi
snf_odevi_EXTERNAL_OBJECTS =

snf_odevi.exe: CMakeFiles/snf_odevi.dir/main.cpp.obj
snf_odevi.exe: CMakeFiles/snf_odevi.dir/build.make
snf_odevi.exe: CMakeFiles/snf_odevi.dir/linklibs.rsp
snf_odevi.exe: CMakeFiles/snf_odevi.dir/objects1.rsp
snf_odevi.exe: CMakeFiles/snf_odevi.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Casper\Desktop\OOP-19\Ornekler\Ulas_Eren_CINAR\sinif_odevi\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable snf_odevi.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\snf_odevi.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/snf_odevi.dir/build: snf_odevi.exe

.PHONY : CMakeFiles/snf_odevi.dir/build

CMakeFiles/snf_odevi.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\snf_odevi.dir\cmake_clean.cmake
.PHONY : CMakeFiles/snf_odevi.dir/clean

CMakeFiles/snf_odevi.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Casper\Desktop\OOP-19\Ornekler\Ulas_Eren_CINAR\sinif_odevi C:\Users\Casper\Desktop\OOP-19\Ornekler\Ulas_Eren_CINAR\sinif_odevi C:\Users\Casper\Desktop\OOP-19\Ornekler\Ulas_Eren_CINAR\sinif_odevi\cmake-build-debug C:\Users\Casper\Desktop\OOP-19\Ornekler\Ulas_Eren_CINAR\sinif_odevi\cmake-build-debug C:\Users\Casper\Desktop\OOP-19\Ornekler\Ulas_Eren_CINAR\sinif_odevi\cmake-build-debug\CMakeFiles\snf_odevi.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/snf_odevi.dir/depend

