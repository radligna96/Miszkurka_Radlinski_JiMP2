project(geometrylab7)

set(HEDEAR_FILES Punkt2D.h Punkt3D.h)
set(SOURCE_FILES Punkt2D.cpp  Punkt3D.cpp)

add_library(libgeometrylab7 STATIC ${SOURCE_FILES})
target_include_directories(libgeometrylab7 PUBLIC .)

add_executable(geometrylab7 ${SOURCE_FILES} main.cpp)

target_link_libraries(geometrylab7 libgeometrylab7)

