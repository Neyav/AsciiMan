# CMakeList.txt : CMake project for AsciiMan, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (AsciiMan "AsciiMan.cpp" "AsciiMan.h" "Mathematics/vector.cpp" "Mathematics/vector.h" "Mathematics/point.cpp" "Mathematics/point.h" "Mathematics/linesegment.cpp" "Mathematics/linesegment.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET AsciiMan PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
