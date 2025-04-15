cmake_minimum_required(VERSION 3.14)

project(ArduinoLibrarySkeletonProject LANGUAGES CXX)

# Add the library
add_subdirectory(lib/ArduinoLibrarySkeleton)

# Add the example application
add_executable(ExampleApp src/main.cpp)

# Link the library to the example application
target_link_libraries(ExampleApp PRIVATE ArduinoLibrarySkeleton)

# Define a preprocessor macro for the library name for the example application
target_compile_definitions(ExampleApp PRIVATE __LIBRARY_NAME__="ArduinoLibrarySkeleton")

# Add unit tests
if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
    include(CTest)
    if(BUILD_TESTING)
        add_subdirectory(test/test_unit_gtest)
        add_subdirectory(test/test_integration_gtest)
    endif()
endif()

# Add GoogleTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Link GoogleTest to unit and integration tests
target_link_libraries(UnitTests PRIVATE ${GTEST_LIBRARIES} pthread)
target_link_libraries(IntegrationTests PRIVATE ${GTEST_LIBRARIES} pthread)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

