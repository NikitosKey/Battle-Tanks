cmake_minimum_required(VERSION 3.16)

project(BattleTanks VERSION 0.0.1 LANGUAGES CXX)

include(CTest)
enable_testing()

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets Test)

qt_standard_project_setup()

add_subdirectory(app)

add_subdirectory(tests)

qt_add_resources(BattleTanks "assets"
    PREFIX "/"
    FILES
        assets/ui/menu/logo.png
        assets/fonts/Pixel\ Emulator.otf
)
