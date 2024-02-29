cmake_minimum_required(VERSION 3.14)
project(
    myWRIO
    VERSION 1.0
    LANGUAGES CXX
)


# Add all source files in the src/ directory
file(GLOB LIB_SOURCES "src/*.cpp" "src/*.h")

add_compile_definitions(MyRio_1900)

add_library(myWRIO STATIC ${LIB_SOURCES})

# Include directories for myWRIO
target_include_directories(myWRIO
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src
    PRIVATE ../myRIO-CAPI/src
)
target_link_libraries(myWRIO NIMyRioCAPI)
