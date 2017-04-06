
project(rodzinaagi)

set(HEDEAR_FILES Rodzic.h Dziecko.h)
set(SOURCE_FILES Rodzic.cpp Dziecko.cpp)

add_library(librodzinaagi STATIC ${SOURCE_FILES})
target_include_directories(librodzinaagi PUBLIC .)

add_executable(rodzinaagi ${SOURCE_FILES} main.cpp)

target_link_libraries(rodzinaagi librodzinaagi)

