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
CMAKE_SOURCE_DIR = /home/bien/ros1/software/Qt_C++/no10_QSetting/no10_QSetting

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/bien/ros1/software/Qt_C++/no10_QSetting/build-no10_QSetting-Desktop-Debug

# Utility rule file for no10_QSetting_autogen.

# Include the progress variables for this target.
include CMakeFiles/no10_QSetting_autogen.dir/progress.make

CMakeFiles/no10_QSetting_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/bien/ros1/software/Qt_C++/no10_QSetting/build-no10_QSetting-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target no10_QSetting"
	/usr/bin/cmake -E cmake_autogen /home/bien/ros1/software/Qt_C++/no10_QSetting/build-no10_QSetting-Desktop-Debug/CMakeFiles/no10_QSetting_autogen.dir/AutogenInfo.json Debug

no10_QSetting_autogen: CMakeFiles/no10_QSetting_autogen
no10_QSetting_autogen: CMakeFiles/no10_QSetting_autogen.dir/build.make

.PHONY : no10_QSetting_autogen

# Rule to build all files generated by this target.
CMakeFiles/no10_QSetting_autogen.dir/build: no10_QSetting_autogen

.PHONY : CMakeFiles/no10_QSetting_autogen.dir/build

CMakeFiles/no10_QSetting_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/no10_QSetting_autogen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/no10_QSetting_autogen.dir/clean

CMakeFiles/no10_QSetting_autogen.dir/depend:
	cd /home/bien/ros1/software/Qt_C++/no10_QSetting/build-no10_QSetting-Desktop-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/bien/ros1/software/Qt_C++/no10_QSetting/no10_QSetting /home/bien/ros1/software/Qt_C++/no10_QSetting/no10_QSetting /home/bien/ros1/software/Qt_C++/no10_QSetting/build-no10_QSetting-Desktop-Debug /home/bien/ros1/software/Qt_C++/no10_QSetting/build-no10_QSetting-Desktop-Debug /home/bien/ros1/software/Qt_C++/no10_QSetting/build-no10_QSetting-Desktop-Debug/CMakeFiles/no10_QSetting_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/no10_QSetting_autogen.dir/depend
