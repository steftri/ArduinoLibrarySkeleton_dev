cmake_minimum_required(VERSION 3.5)

project(ArduinoLibrarySkeleton_dev LANGUAGES CXX)

enable_testing()

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Test)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Test)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(lib/ArduinoLibrarySkeleton)

add_executable(ArduinoLibrarySkeleton_dev
  qtest/tst_arduinolibraryskeleton.cpp
)

add_test(NAME ArduinoLibrarySkeleton_dev COMMAND ArduinoLibrarySkeleton_dev)

target_link_libraries(ArduinoLibrarySkeleton_dev PRIVATE Qt${QT_VERSION_MAJOR}::Test ArduinoLibrarySkeleton)


