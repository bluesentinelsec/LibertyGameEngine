cmake_minimum_required(VERSION 3.5)

project(LibertyGameEngine)

add_executable(${PROJECT_NAME}
        include/raygui.h
        src/tinyxml2.cpp
        src/main.cpp
        )

set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 20)

add_subdirectory("subprojects/raylib-4.5.0")
add_subdirectory("subprojects/physfs-release-3.2.0")

target_link_libraries(${PROJECT_NAME}
        raylib
        physfs-static
        )

target_include_directories(${PROJECT_NAME} PUBLIC
        subprojects/raylib-4.5.0/src/
        subprojects/physfs-release-3.2.0/src/
        include
        )

