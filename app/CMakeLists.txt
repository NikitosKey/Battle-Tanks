qt_add_executable(BattleTanks
    main.cpp
    ui/menu_window/menu_window.h
    ui/menu_window/menu_window.cpp
    components/resizable_qlabel/resizable_qlabel.h
    components/resizable_qlabel/resizable_qlabel.cpp
)
target_include_directories(BattleTanks PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(BattleTanks PRIVATE Qt6::Widgets)

set_target_properties(BattleTanks PROPERTIES
    MACOSX_BUNDLE ON
)

set_source_files_properties(
    PROPERTIES MACOSX_PACKAGE_LOCATION "Resources"
)

