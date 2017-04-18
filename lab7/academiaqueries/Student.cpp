//
// Created by miszagni on 04.04.17.
//

#include "Student.h"
using ::std::istream;

namespace academia{
    //konstruktor bezparametrowy
    Student::Student() {
        id = "";
        last_name = "";
        program = "";
    }

    //konstruktor parametrowy
/*    Student::Student(string id_, string name_, string last_name_, int year_){
        id = id_;
        name = name_;
        last_name = last_name_;
        year = year_;

    }
*/
    std::ostream & operator <<( std::ostream & s, const Student & v ) {
        return s << "Student " << v.last_name << std::endl << "id: "<< v.id << std::endl<< "program: " << v.program;
    }

}








