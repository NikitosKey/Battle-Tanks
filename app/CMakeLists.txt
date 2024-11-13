qt_add_executable(BattleTanks
        main.cpp
        ui/window/window.cpp
        ui/window/window.h
        ui/menu_layout/menu_layout.cpp
        ui/menu_layout/menu_layout.h
        ui/levels_layout/levels_layout.cpp
        ui/levels_layout/levels_layout.h
        ui/construction_layout/construction_layout.cpp
        ui/construction_layout/construction_layout.h
        #        ui/game_layout/game_layout.cpp
        #        ui/game_layout/game_layout.h
        components/resizable_label/resizable_label.cpp
        components/resizable_label/resizable_label.h
)

target_include_directories(BattleTanks PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(BattleTanks PRIVATE Qt6::Widgets)

set_target_properties(BattleTanks PROPERTIES
        MACOSX_BUNDLE ON
)

set_source_files_properties(
        PROPERTIES MACOSX_PACKAGE_LOCATION "Resources"
)

