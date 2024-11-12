add_executable(TestComponents
        ../app/components/resizable_label/resizable_label.h
        ../app/components/resizable_label/resizable_label.cpp
        test_components/test_resizable_label/test_resizable_label.h
        test_components/test_resizable_label/test_resizable_label.cpp
)

target_include_directories(TestComponents PRIVATE ${CMAKE_SOURCE_DIR}/app/components/resizable_label/)

target_link_libraries(TestComponents PRIVATE Qt6::Widgets Qt6::Test)

add_test(TestComponents TestComponents)
