
project(zad1)

set(HEDEAR_FILES pierwsze.h)
set(SOURCE_FILES pierwsze.cpp)

add_library(libzad1 STATIC ${SOURCE_FILES})
target_include_directories(libzad1 PUBLIC .)

add_executable(zad1 ${SOURCE_FILES} main.cpp)

target_link_libraries(zad1 libzad1)

