cmake_minimum_required(VERSION 3.22)

add_executable(LearnOpenGL
        main.cpp
        ../External/header/glad.c
        shader.cpp
)


target_link_libraries(LearnOpenGL glfw)
target_include_directories(LearnOpenGL PRIVATE ../External/glad/include)
target_include_directories(LearnOpenGL PRIVATE ../External/glm)
target_include_directories(LearnOpenGL PRIVATE ../External/header)