cmake_minimum_required(VERSION 3.16)
project(jsoncpp_demo)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

include_directories(${PROJECT_SOURCE_DIR}/include)

link_directories(${PROJECT_SOURCE_DIR}/lib)
link_libraries(libjsoncpp.a)

add_executable(jsoncpp_demo main.cpp)

target_link_libraries(jsoncpp_demo jsoncpp)