project(geometry)

set(HEDEAR_FILES Punkt2D.h Punkt3D.h)
set(SOURCE_FILES Punkt2D.cpp  Punkt3D.cpp)

add_library(libgeometry STATIC ${SOURCE_FILES})
target_include_directories(libgeometry PUBLIC .)

add_executable(geometry ${SOURCE_FILES} main.cpp)

target_link_libraries(geometry libgeometry)

