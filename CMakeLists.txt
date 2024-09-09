cmake_minimum_required(VERSION 3.10)

# Set project name
project(EmbeddedDeviceController)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)

# Add the source files
add_executable(EmbeddedDeviceController
        src/DeviceDriver.cpp
        src/UserSpaceApp.cpp
)

# Link libraries (if needed in real hardware interaction projects)
