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
CMAKE_COMMAND = /cygdrive/c/Users/Devin/.CLion2018.3/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/Devin/.CLion2018.3/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/c/Users/Devin/sync/Programming/Schoolwork/CS2400/c-2nd-lang-asst-01

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/Devin/sync/Programming/Schoolwork/CS2400/c-2nd-lang-asst-01/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/c_2nd_lang_asst_01.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/c_2nd_lang_asst_01.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/c_2nd_lang_asst_01.dir/flags.make

CMakeFiles/c_2nd_lang_asst_01.dir/main.c.o: CMakeFiles/c_2nd_lang_asst_01.dir/flags.make
CMakeFiles/c_2nd_lang_asst_01.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/Devin/sync/Programming/Schoolwork/CS2400/c-2nd-lang-asst-01/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/c_2nd_lang_asst_01.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/c_2nd_lang_asst_01.dir/main.c.o   -c /cygdrive/c/Users/Devin/sync/Programming/Schoolwork/CS2400/c-2nd-lang-asst-01/main.c

CMakeFiles/c_2nd_lang_asst_01.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/c_2nd_lang_asst_01.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Users/Devin/sync/Programming/Schoolwork/CS2400/c-2nd-lang-asst-01/main.c > CMakeFiles/c_2nd_lang_asst_01.dir/main.c.i

CMakeFiles/c_2nd_lang_asst_01.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/c_2nd_lang_asst_01.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Users/Devin/sync/Programming/Schoolwork/CS2400/c-2nd-lang-asst-01/main.c -o CMakeFiles/c_2nd_lang_asst_01.dir/main.c.s

# Object files for target c_2nd_lang_asst_01
c_2nd_lang_asst_01_OBJECTS = \
"CMakeFiles/c_2nd_lang_asst_01.dir/main.c.o"

# External object files for target c_2nd_lang_asst_01
c_2nd_lang_asst_01_EXTERNAL_OBJECTS =

c_2nd_lang_asst_01.exe: CMakeFiles/c_2nd_lang_asst_01.dir/main.c.o
c_2nd_lang_asst_01.exe: CMakeFiles/c_2nd_lang_asst_01.dir/build.make
c_2nd_lang_asst_01.exe: CMakeFiles/c_2nd_lang_asst_01.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/Devin/sync/Programming/Schoolwork/CS2400/c-2nd-lang-asst-01/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable c_2nd_lang_asst_01.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/c_2nd_lang_asst_01.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/c_2nd_lang_asst_01.dir/build: c_2nd_lang_asst_01.exe

.PHONY : CMakeFiles/c_2nd_lang_asst_01.dir/build

CMakeFiles/c_2nd_lang_asst_01.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/c_2nd_lang_asst_01.dir/cmake_clean.cmake
.PHONY : CMakeFiles/c_2nd_lang_asst_01.dir/clean

CMakeFiles/c_2nd_lang_asst_01.dir/depend:
	cd /cygdrive/c/Users/Devin/sync/Programming/Schoolwork/CS2400/c-2nd-lang-asst-01/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/Devin/sync/Programming/Schoolwork/CS2400/c-2nd-lang-asst-01 /cygdrive/c/Users/Devin/sync/Programming/Schoolwork/CS2400/c-2nd-lang-asst-01 /cygdrive/c/Users/Devin/sync/Programming/Schoolwork/CS2400/c-2nd-lang-asst-01/cmake-build-debug /cygdrive/c/Users/Devin/sync/Programming/Schoolwork/CS2400/c-2nd-lang-asst-01/cmake-build-debug /cygdrive/c/Users/Devin/sync/Programming/Schoolwork/CS2400/c-2nd-lang-asst-01/cmake-build-debug/CMakeFiles/c_2nd_lang_asst_01.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/c_2nd_lang_asst_01.dir/depend

