CMAKE_MINIMUM_REQUIRED(VERSION 3.10)

# Set the project name
PROJECT(AbstractfactoryDesignPattern)

# Set the path for include directories
include_directories(include Mac Windows)

# Specify the source files
file(GLOB SOURCES CONFIGURE_DEPENDS "Mac/*" "Windows/*" main.cpp)

# Add the executablex
ADD_EXECUTABLE(AbstractFactoryDP ${SOURCES})
