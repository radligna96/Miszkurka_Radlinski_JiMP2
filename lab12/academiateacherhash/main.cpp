//
// Created by miszk on 6/1/2017.
//

#include "TeacherHash.h"
#include "iostream"
#include <unordered_map>
using namespace academia;
int main()
{
    academia::TeacherId id(122);
    int cl;
    cl = id;
    std::cout<<int(id);
    const Teacher oo;
    std::unordered_map<Teacher, int, TeacherHash> m = {{oo, 2}};
    m.emplace(oo, 33);

    return 0;
}