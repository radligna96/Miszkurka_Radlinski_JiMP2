
project(treeiterators)



set(HEDEAR_FILES TreeIterators.h TreePreorder.h TreePostorder.h TreeInorder.h)

set(SOURCE_FILES TreeIterators.cpp TreePreorder.cpp TreeInorder.cpp TreePostorder.cpp)



add_library(libtreeiterators STATIC ${SOURCE_FILES})

target_include_directories(libtreeiterators PUBLIC .)



add_executable(treeiterators ${SOURCE_FILES} main.cpp)



target_link_libraries(treeiterators libtreeiterators)

target_link_libraries(libtreeiterators libtree)