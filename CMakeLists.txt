cmake_minimum_required(VERSION 2.8.11)
project(LudumDare33)

# Find SFML
set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake" ${CMAKE_MODULE_PATH})
#set(SFML_STATIC_LIBRARIES TRUE)
find_package(SFML 2.3 REQUIRED graphics window audio system)

# Add source files
file(GLOB M_SOURCE src/*.cpp)

# Dependencies/includes
add_subdirectory(lib/es)
add_subdirectory(lib/nage)
include_directories(
    lib/es/lib/ConfigFile
    lib/es/include
    ${SFML_INCLUDE_DIR}
    lib/nage/include
    include
)

# Build binary files
add_definitions("-Wpedantic -Wall -std=c++14 -O3")
add_executable(l33 ${M_SOURCE})
target_link_libraries(l33 LINK_PUBLIC es_s cfgfile_s nage_s ${SFML_LIBRARIES})
