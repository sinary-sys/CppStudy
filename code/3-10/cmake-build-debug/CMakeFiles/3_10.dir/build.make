# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\Program Files\JetBrains\CLion 2019.2.5\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Program Files\JetBrains\CLion 2019.2.5\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = F:\Github\c++study\code\3-10

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\Github\c++study\code\3-10\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\3_10.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\3_10.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\3_10.dir\flags.make

CMakeFiles\3_10.dir\main.cpp.obj: CMakeFiles\3_10.dir\flags.make
CMakeFiles\3_10.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\Github\c++study\code\3-10\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/3_10.dir/main.cpp.obj"
	F:\VisualStudio2017\VC\Tools\MSVC\14.16.27023\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\3_10.dir\main.cpp.obj /FdCMakeFiles\3_10.dir\ /FS -c F:\Github\c++study\code\3-10\main.cpp
<<

CMakeFiles\3_10.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/3_10.dir/main.cpp.i"
	F:\VisualStudio2017\VC\Tools\MSVC\14.16.27023\bin\Hostx86\x86\cl.exe > CMakeFiles\3_10.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\Github\c++study\code\3-10\main.cpp
<<

CMakeFiles\3_10.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/3_10.dir/main.cpp.s"
	F:\VisualStudio2017\VC\Tools\MSVC\14.16.27023\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\3_10.dir\main.cpp.s /c F:\Github\c++study\code\3-10\main.cpp
<<

# Object files for target 3_10
3_10_OBJECTS = \
"CMakeFiles\3_10.dir\main.cpp.obj"

# External object files for target 3_10
3_10_EXTERNAL_OBJECTS =

3_10.exe: CMakeFiles\3_10.dir\main.cpp.obj
3_10.exe: CMakeFiles\3_10.dir\build.make
3_10.exe: CMakeFiles\3_10.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\Github\c++study\code\3-10\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 3_10.exe"
	"D:\Program Files\JetBrains\CLion 2019.2.5\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\3_10.dir --rc="F:\Windows Kits\10\bin\10.0.17763.0\x86\rc.exe" --mt="F:\Windows Kits\10\bin\10.0.17763.0\x86\mt.exe" --manifests  -- F:\VisualStudio2017\VC\Tools\MSVC\14.16.27023\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\3_10.dir\objects1.rsp @<<
 /out:3_10.exe /implib:3_10.lib /pdb:F:\Github\c++study\code\3-10\cmake-build-debug\3_10.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\3_10.dir\build: 3_10.exe

.PHONY : CMakeFiles\3_10.dir\build

CMakeFiles\3_10.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\3_10.dir\cmake_clean.cmake
.PHONY : CMakeFiles\3_10.dir\clean

CMakeFiles\3_10.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" F:\Github\c++study\code\3-10 F:\Github\c++study\code\3-10 F:\Github\c++study\code\3-10\cmake-build-debug F:\Github\c++study\code\3-10\cmake-build-debug F:\Github\c++study\code\3-10\cmake-build-debug\CMakeFiles\3_10.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\3_10.dir\depend

