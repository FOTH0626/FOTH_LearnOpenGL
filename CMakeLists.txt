cmake_minimum_required(VERSION 3.22)

project(LearnOpenGL)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Werror")


add_subdirectory(External/glfw)
add_subdirectory(External/glm)


add_subdirectory(Src)


