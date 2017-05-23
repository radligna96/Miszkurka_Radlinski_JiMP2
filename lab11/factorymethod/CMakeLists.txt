
project(dodawanie)

set(HEDEAR_FILES Dodawanie.h)
set(SOURCE_FILES Dodawanie.cpp)

add_library(libdodawanie STATIC ${SOURCE_FILES})
target_include_directories(libdodawanie PUBLIC .)

add_executable(dodawanie ${SOURCE_FILES} main.cpp)

target_link_libraries(dodawanie libdodawanie)

