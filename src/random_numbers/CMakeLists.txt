cmake_minimum_required(VERSION 3.2)
project(coursework C CXX)

set(SOURCE_FILES
    random.h
    random.cpp
)

add_library(random_numbers SHARED STATIC ${SOURCE_FILES})

install(TARGETS random_numbers DESTINATION ${DIVISIBLE_INSTALL_LIB_DIR})
install(FILES random.h DESTINATION ${DIVISIBLE_INSTALL_INCLUDE_DIR})
