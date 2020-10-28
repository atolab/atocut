cmake_minimum_required(VERSION 3.0.0)
project(atocut VERSION 0.1.0)

include_directories(./include)
if (BUILD_SHARED_LIBS OR NOT DEFINED BUILD_SHARED_LIBS)
    add_library(atocut SHARED src/atocut.c)
else()
    add_library(atocut  src/atocut.c)
endif()

add_compile_definitions(RELEASE)
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

install(TARGETS atocut DESTINATION lib)

install (
    DIRECTORY ${CMAKE_SOURCE_DIR}/include/
    DESTINATION include/ato
    FILES_MATCHING PATTERN "*.h")
