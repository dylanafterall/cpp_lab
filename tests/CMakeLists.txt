# Use CMake to download GoogleTest as part of the build's configure step
# Downloads and pulls the GoogleTest code into the main build
# This approach requires CMake 3.14 or later due to its use of FetchContent_MakeAvailable()
include(FetchContent)
FetchContent_Declare(
        googletest
        # Specify the commit you depend on and update it regularly.
        URL https://github.com/google/googletest/archive/5376968f6948923e2411081fd9372e71a59d8e77.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# project testing setup
enable_testing()

add_executable(cpp_lab_tests
        lc_easy/two_sum_test.cpp
        lc_easy/palindrome_number_test.cpp
        lc_easy/roman_to_integer_test.cpp
        lc_easy/longest_common_prefix.cpp
        lc_easy/valid_parentheses_test.cpp
)

target_link_libraries(cpp_lab_tests
        GTest::gtest_main
        lc_lib
)

include(GoogleTest)
gtest_discover_tests(cpp_lab_tests)
