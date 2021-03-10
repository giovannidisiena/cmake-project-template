cmake_minimum_required(VERSION 3.2)
project(coursework)

add_subdirectory(random_numbers)
set(SOURCE_FILES main.cpp)

add_executable(coursework ${SOURCE_FILES})
target_link_libraries(coursework random_numbers)
install(TARGETS coursework DESTINATION ${DIVISIBLE_INSTALL_BIN_DIR})
