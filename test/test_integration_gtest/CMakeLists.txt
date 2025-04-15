# CMake configuration for integration tests
add_executable(IntegrationTests test_integration_gtest.cpp)

# Link the library to the integration tests
target_link_libraries(IntegrationTests PRIVATE ArduinoLibrarySkeleton)

# Enable testing for this target
add_test(NAME IntegrationTests COMMAND IntegrationTests)
