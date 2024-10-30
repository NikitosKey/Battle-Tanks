qt_add_executable(BattleTanks
    main.cpp
    ui/menu_window/menu_window.h
    ui/menu_window/menu_window.cpp
)
target_include_directories(BattleTanks PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
