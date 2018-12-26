cmake_minimum_required(VERSION 3.0)
project(CPPLearning)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -pedantic -Wextra")
set(env{CMAKE_EXPORT_COMPILE_COMMANDS} true)

add_definitions("-std=c++11")

include(${CMAKE_BINARY_DIR}/build/conanbuildinfo.cmake)
conan_basic_setup()

add_executable(main main.cpp)
target_link_libraries(main ${CONAN_LIBS})
