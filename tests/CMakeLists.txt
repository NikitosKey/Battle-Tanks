add_executable(TestComponents
    ./../app/components/resizable_qlabel/resizable_qlabel.h
    ./../app/components/resizable_qlabel/resizable_qlabel.cpp
    ./test_components/test_resizable_qlabel/test_resizable_qlabel.h
    ./test_components/test_resizable_qlabel/test_resizable_qlabel.cpp
)

target_include_directories(TestComponents PRIVATE ${CMAKE_SOURCE_DIR}/app/components/resizable_qlabel/)

target_link_libraries(TestComponents PRIVATE Qt6::Widgets Qt6::Test)

add_test(TestComponents TestComponents)
