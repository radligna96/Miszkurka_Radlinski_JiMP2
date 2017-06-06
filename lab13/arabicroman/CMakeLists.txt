
project(klasa1)

set(HEDEAR_FILES Klasa1.h Klasa1Test.h)
set(SOURCE_FILES Klasa1.cpp Klasa1Test.cpp)

add_library(libklasa1 STATIC ${SOURCE_FILES})
target_include_directories(libklasa1 PUBLIC .)

add_executable(klasa1 ${SOURCE_FILES} main.cpp)

target_link_libraries(klasa1 libklasa1)

