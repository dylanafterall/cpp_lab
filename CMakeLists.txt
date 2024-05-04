cmake_minimum_required(VERSION 3.28)
project(cpp_lab)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -O0 -Wall -Werror")

add_library(lc_lib
        src/lc_easy/two_sum.cpp
        src/lc_easy/palindrome_number.cpp
        src/lc_easy/roman_to_integer.cpp
        src/lc_easy/longest_common_prefix.cpp
        src/lc_easy/valid_parentheses.cpp
)

add_executable(${PROJECT_NAME} src/main.cpp)

include_directories(${PROJECT_NAME} PRIVATE ${PROJECT_SOURCE_DIR}/include)

target_link_libraries(${PROJECT_NAME} lc_lib)

add_subdirectory(tests)
