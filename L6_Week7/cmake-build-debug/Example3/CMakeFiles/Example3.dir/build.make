# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/x64/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/x64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/yiningqu/Desktop/研究生/32600 C++/L6_Week7"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/yiningqu/Desktop/研究生/32600 C++/L6_Week7/cmake-build-debug"

# Include any dependencies generated for this target.
include Example3/CMakeFiles/example3.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Example3/CMakeFiles/example3.dir/compiler_depend.make

# Include the progress variables for this target.
include Example3/CMakeFiles/example3.dir/progress.make

# Include the compile flags for this target's objects.
include Example3/CMakeFiles/example3.dir/flags.make

Example3/CMakeFiles/example3.dir/main.cpp.o: Example3/CMakeFiles/example3.dir/flags.make
Example3/CMakeFiles/example3.dir/main.cpp.o: /Users/yiningqu/Desktop/研究生/32600\ C++/L6_Week7/Example3/main.cpp
Example3/CMakeFiles/example3.dir/main.cpp.o: Example3/CMakeFiles/example3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/Users/yiningqu/Desktop/研究生/32600 C++/L6_Week7/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Example3/CMakeFiles/example3.dir/main.cpp.o"
	cd "/Users/yiningqu/Desktop/研究生/32600 C++/L6_Week7/cmake-build-debug/Example3" && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Example3/CMakeFiles/example3.dir/main.cpp.o -MF CMakeFiles/example3.dir/main.cpp.o.d -o CMakeFiles/example3.dir/main.cpp.o -c "/Users/yiningqu/Desktop/研究生/32600 C++/L6_Week7/Example3/main.cpp"

Example3/CMakeFiles/example3.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/example3.dir/main.cpp.i"
	cd "/Users/yiningqu/Desktop/研究生/32600 C++/L6_Week7/cmake-build-debug/Example3" && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/yiningqu/Desktop/研究生/32600 C++/L6_Week7/Example3/main.cpp" > CMakeFiles/example3.dir/main.cpp.i

Example3/CMakeFiles/example3.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/example3.dir/main.cpp.s"
	cd "/Users/yiningqu/Desktop/研究生/32600 C++/L6_Week7/cmake-build-debug/Example3" && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/yiningqu/Desktop/研究生/32600 C++/L6_Week7/Example3/main.cpp" -o CMakeFiles/example3.dir/main.cpp.s

Example3/CMakeFiles/example3.dir/Derived2.cpp.o: Example3/CMakeFiles/example3.dir/flags.make
Example3/CMakeFiles/example3.dir/Derived2.cpp.o: /Users/yiningqu/Desktop/研究生/32600\ C++/L6_Week7/Example3/Derived2.cpp
Example3/CMakeFiles/example3.dir/Derived2.cpp.o: Example3/CMakeFiles/example3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/Users/yiningqu/Desktop/研究生/32600 C++/L6_Week7/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object Example3/CMakeFiles/example3.dir/Derived2.cpp.o"
	cd "/Users/yiningqu/Desktop/研究生/32600 C++/L6_Week7/cmake-build-debug/Example3" && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Example3/CMakeFiles/example3.dir/Derived2.cpp.o -MF CMakeFiles/example3.dir/Derived2.cpp.o.d -o CMakeFiles/example3.dir/Derived2.cpp.o -c "/Users/yiningqu/Desktop/研究生/32600 C++/L6_Week7/Example3/Derived2.cpp"

Example3/CMakeFiles/example3.dir/Derived2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/example3.dir/Derived2.cpp.i"
	cd "/Users/yiningqu/Desktop/研究生/32600 C++/L6_Week7/cmake-build-debug/Example3" && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/yiningqu/Desktop/研究生/32600 C++/L6_Week7/Example3/Derived2.cpp" > CMakeFiles/example3.dir/Derived2.cpp.i

Example3/CMakeFiles/example3.dir/Derived2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/example3.dir/Derived2.cpp.s"
	cd "/Users/yiningqu/Desktop/研究生/32600 C++/L6_Week7/cmake-build-debug/Example3" && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/yiningqu/Desktop/研究生/32600 C++/L6_Week7/Example3/Derived2.cpp" -o CMakeFiles/example3.dir/Derived2.cpp.s

# Object files for target example3
example3_OBJECTS = \
"CMakeFiles/example3.dir/main.cpp.o" \
"CMakeFiles/example3.dir/Derived2.cpp.o"

# External object files for target example3
example3_EXTERNAL_OBJECTS =

Example3/example3: Example3/CMakeFiles/example3.dir/main.cpp.o
Example3/example3: Example3/CMakeFiles/example3.dir/Derived2.cpp.o
Example3/example3: Example3/CMakeFiles/example3.dir/build.make
Example3/example3: Example3/CMakeFiles/example3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="/Users/yiningqu/Desktop/研究生/32600 C++/L6_Week7/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable example3"
	cd "/Users/yiningqu/Desktop/研究生/32600 C++/L6_Week7/cmake-build-debug/Example3" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/example3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Example3/CMakeFiles/example3.dir/build: Example3/example3
.PHONY : Example3/CMakeFiles/example3.dir/build

Example3/CMakeFiles/example3.dir/clean:
	cd "/Users/yiningqu/Desktop/研究生/32600 C++/L6_Week7/cmake-build-debug/Example3" && $(CMAKE_COMMAND) -P CMakeFiles/example3.dir/cmake_clean.cmake
.PHONY : Example3/CMakeFiles/example3.dir/clean

Example3/CMakeFiles/example3.dir/depend:
	cd "/Users/yiningqu/Desktop/研究生/32600 C++/L6_Week7/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/yiningqu/Desktop/研究生/32600 C++/L6_Week7" "/Users/yiningqu/Desktop/研究生/32600 C++/L6_Week7/Example3" "/Users/yiningqu/Desktop/研究生/32600 C++/L6_Week7/cmake-build-debug" "/Users/yiningqu/Desktop/研究生/32600 C++/L6_Week7/cmake-build-debug/Example3" "/Users/yiningqu/Desktop/研究生/32600 C++/L6_Week7/cmake-build-debug/Example3/CMakeFiles/example3.dir/DependInfo.cmake" "--color=$(COLOR)"
.PHONY : Example3/CMakeFiles/example3.dir/depend

