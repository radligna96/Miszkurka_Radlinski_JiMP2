
project(ksztalt)

<<<<<<< HEAD
set(HEDEAR_FILES Ksztalt.h Kwadrat.h Kolko.h)
set(SOURCE_FILES Ksztalt.cpp Kwadrat.cpp Kolko.cpp)
=======
set(HEDEAR_FILES Ksztalt.h)
set(SOURCE_FILES Ksztalt.cpp)
>>>>>>> e6951c06cd0b1dff321b78fb27d50cac0119603f

add_library(libksztalt STATIC ${SOURCE_FILES})
target_include_directories(libksztalt PUBLIC .)

add_executable(ksztalt ${SOURCE_FILES} main.cpp)

target_link_libraries(ksztalt libksztalt)

