cmake_minimum_required(VERSION 3.17)
project(unit_testing VERSION 1.0
        DESCRIPTION "unit testing demo"
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
#set(OPENSSL_ROOT_DIR /usr/bin/openssl)

include_directories(src)

add_subdirectory(src)
add_subdirectory(test)
add_subdirectory(lib/googletest)
add_subdirectory(lib/libcurl/curl-7.72.0)

#cmake_print_properties(CMAKE_PROJECT_NAME)