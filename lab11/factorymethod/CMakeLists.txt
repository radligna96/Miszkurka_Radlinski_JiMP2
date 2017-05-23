
project(factorymethod)

set(HEDEAR_FILES Dodawanie.h FactoryMethod.h)
set(SOURCE_FILES Dodawanie.cpp FactoryMethod.cpp)

add_library(libfactorymethod STATIC ${SOURCE_FILES})
target_include_directories(libfactorymethod PUBLIC .)

add_executable(factorymethod ${SOURCE_FILES} main.cpp)

target_link_libraries(factorymethod libfactorymethod)

