project(libcore)
cmake_minimum_required(VERSION 2.8)

include_directories("./src/include" "/usr/include")

add_subdirectory(src/common)
add_subdirectory(src/net)
add_subdirectory(src/test)