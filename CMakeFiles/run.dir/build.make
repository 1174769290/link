# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = /home/junjie/clion/CLion-2021.1.3/clion-2021.1.3/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/junjie/clion/CLion-2021.1.3/clion-2021.1.3/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/junjie/桌面/计算器

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/junjie/桌面/计算器/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/run.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/run.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/run.dir/flags.make

CMakeFiles/run.dir/run_autogen/mocs_compilation.cpp.o: CMakeFiles/run.dir/flags.make
CMakeFiles/run.dir/run_autogen/mocs_compilation.cpp.o: run_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/junjie/桌面/计算器/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/run.dir/run_autogen/mocs_compilation.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/run.dir/run_autogen/mocs_compilation.cpp.o -c /home/junjie/桌面/计算器/cmake-build-debug/run_autogen/mocs_compilation.cpp

CMakeFiles/run.dir/run_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/run.dir/run_autogen/mocs_compilation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/junjie/桌面/计算器/cmake-build-debug/run_autogen/mocs_compilation.cpp > CMakeFiles/run.dir/run_autogen/mocs_compilation.cpp.i

CMakeFiles/run.dir/run_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/run.dir/run_autogen/mocs_compilation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/junjie/桌面/计算器/cmake-build-debug/run_autogen/mocs_compilation.cpp -o CMakeFiles/run.dir/run_autogen/mocs_compilation.cpp.s

CMakeFiles/run.dir/main.cpp.o: CMakeFiles/run.dir/flags.make
CMakeFiles/run.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/junjie/桌面/计算器/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/run.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/run.dir/main.cpp.o -c /home/junjie/桌面/计算器/main.cpp

CMakeFiles/run.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/run.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/junjie/桌面/计算器/main.cpp > CMakeFiles/run.dir/main.cpp.i

CMakeFiles/run.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/run.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/junjie/桌面/计算器/main.cpp -o CMakeFiles/run.dir/main.cpp.s

CMakeFiles/run.dir/mainwind.cpp.o: CMakeFiles/run.dir/flags.make
CMakeFiles/run.dir/mainwind.cpp.o: mainwind.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/junjie/桌面/计算器/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/run.dir/mainwind.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/run.dir/mainwind.cpp.o -c /home/junjie/桌面/计算器/cmake-build-debug/mainwind.cpp

CMakeFiles/run.dir/mainwind.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/run.dir/mainwind.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/junjie/桌面/计算器/cmake-build-debug/mainwind.cpp > CMakeFiles/run.dir/mainwind.cpp.i

CMakeFiles/run.dir/mainwind.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/run.dir/mainwind.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/junjie/桌面/计算器/cmake-build-debug/mainwind.cpp -o CMakeFiles/run.dir/mainwind.cpp.s

CMakeFiles/run.dir/sanjiao.cpp.o: CMakeFiles/run.dir/flags.make
CMakeFiles/run.dir/sanjiao.cpp.o: sanjiao.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/junjie/桌面/计算器/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/run.dir/sanjiao.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/run.dir/sanjiao.cpp.o -c /home/junjie/桌面/计算器/cmake-build-debug/sanjiao.cpp

CMakeFiles/run.dir/sanjiao.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/run.dir/sanjiao.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/junjie/桌面/计算器/cmake-build-debug/sanjiao.cpp > CMakeFiles/run.dir/sanjiao.cpp.i

CMakeFiles/run.dir/sanjiao.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/run.dir/sanjiao.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/junjie/桌面/计算器/cmake-build-debug/sanjiao.cpp -o CMakeFiles/run.dir/sanjiao.cpp.s

# Object files for target run
run_OBJECTS = \
"CMakeFiles/run.dir/run_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/run.dir/main.cpp.o" \
"CMakeFiles/run.dir/mainwind.cpp.o" \
"CMakeFiles/run.dir/sanjiao.cpp.o"

# External object files for target run
run_EXTERNAL_OBJECTS =

run: CMakeFiles/run.dir/run_autogen/mocs_compilation.cpp.o
run: CMakeFiles/run.dir/main.cpp.o
run: CMakeFiles/run.dir/mainwind.cpp.o
run: CMakeFiles/run.dir/sanjiao.cpp.o
run: CMakeFiles/run.dir/build.make
run: /opt/Qt5.12.3/5.12.3/gcc_64/lib/libQt5Widgets.so.5.12.3
run: /opt/Qt5.12.3/5.12.3/gcc_64/lib/libQt5Gui.so.5.12.3
run: /opt/Qt5.12.3/5.12.3/gcc_64/lib/libQt5Core.so.5.12.3
run: CMakeFiles/run.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/junjie/桌面/计算器/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable run"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/run.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/run.dir/build: run

.PHONY : CMakeFiles/run.dir/build

CMakeFiles/run.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/run.dir/cmake_clean.cmake
.PHONY : CMakeFiles/run.dir/clean

CMakeFiles/run.dir/depend:
	cd /home/junjie/桌面/计算器/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/junjie/桌面/计算器 /home/junjie/桌面/计算器 /home/junjie/桌面/计算器/cmake-build-debug /home/junjie/桌面/计算器/cmake-build-debug /home/junjie/桌面/计算器/cmake-build-debug/CMakeFiles/run.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/run.dir/depend

