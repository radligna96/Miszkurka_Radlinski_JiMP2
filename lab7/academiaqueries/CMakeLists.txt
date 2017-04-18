
project(academiaqueries)

set(HEDEAR_FILES StudyYear.h Student.h StudentRepository.h StudentComparator.h)
set(SOURCE_FILES StudyYear.cpp Student.cpp StudentRepository.cpp StudentComparator.cpp)

add_library(libacademiaqueries STATIC ${SOURCE_FILES})
target_include_directories(libacademiaqueries PUBLIC .)

add_executable(academiaqueries ${SOURCE_FILES} main.cpp)

target_link_libraries(academiaqueries libacademiaqueries)

