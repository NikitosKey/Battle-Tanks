cmake_minimum_required(VERSION 3.16)

project(BattleTanks VERSION 0.0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

qt_standard_project_setup()

add_subdirectory(app)


target_link_libraries(BattleTanks PRIVATE Qt6::Widgets)


set_target_properties(BattleTanks PROPERTIES
    MACOSX_BUNDLE ON
)
