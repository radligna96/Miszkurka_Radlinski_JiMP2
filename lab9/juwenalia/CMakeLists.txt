
project(juwenalia)

set(HEDEAR_FILES Plecak.h)
set(SOURCE_FILES Plecak.cpp)

add_library(libplecak STATIC ${SOURCE_FILES})
target_include_directories(libplecak PUBLIC .)

add_executable(plecak ${SOURCE_FILES} main.cpp)

target_link_libraries(plecak libplecak)

