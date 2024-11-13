cmake_minimum_required(VERSION 3.16)

project(BattleTanks VERSION 0.0.1 LANGUAGES CXX)

include(CTest)
enable_testing()

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DDEBUG_BUILD")

find_package(Qt6 REQUIRED COMPONENTS Widgets Test)
add_subdirectory(app)

add_subdirectory(tests)

qt_add_resources(BattleTanks "assets"
    PREFIX "/"
    FILES
        assets/ui/menu/logo.png
        assets/fonts/Pixel\ Emulator.otf
)
