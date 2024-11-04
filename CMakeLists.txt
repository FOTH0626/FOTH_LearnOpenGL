cmake_minimum_required(VERSION 3.22)

project(LearnOpenGL)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Werror")

add_subdirectory(External/glfw)
add_subdirectory(External/glm)

add_executable(LearnOpenGL
        main.cpp
        glad.c
        shader.cpp
)

target_link_libraries(LearnOpenGL glfw)
target_include_directories(LearnOpenGL PRIVATE External/glad/include)
target_include_directories(LearnOpenGL PRIVATE External/glm)