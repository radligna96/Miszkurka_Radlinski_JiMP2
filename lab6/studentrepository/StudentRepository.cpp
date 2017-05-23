//
// Created by miszagni on 04.04.17.
//

#include "StudentRepository.h"
using ::std::istream;

namespace academia {

    StudyYear &StudyYear::operator++() {
        this->study_year += 1;
        return *this;
    }

    StudyYear &StudyYear::operator--() {

        this->study_year -= 1;
        return *this;
    }

    std::ostream &operator<<(std::ostream &s, const Student &v) {
        return s << "Student " << v.lastName << std::endl << "id: " << v.id << std::endl << "program: " << v.program;
    }

    void StudyYear::SetYear(int y) {
        this->study_year = y;
    }

    StudyYear::~StudyYear() {
    }

    StudyYear::StudyYear(int x) {
        this->study_year = x;
    }

    StudyYear::StudyYear() {
        this->study_year = 1;
    }

    bool StudyYear::operator==(StudyYear another_study_year) const {
        return this->study_year == another_study_year.study_year;
    }

    bool operator==(int uu, StudyYear nana){
        return uu == nana.study_year;
    }

    bool StudyYear::operator>(StudyYear another_study_year) const {
        return this->study_year > another_study_year.study_year;
    }

    bool StudyYear::operator<(StudyYear another_study_year) const {
        return this->study_year < another_study_year.study_year;
    }

    bool StudyYear::operator==(int year_nr) const {
        return this->study_year == year_nr;
    }

    StudyYear::operator int() const {
        return study_year;
    }

    int ReadNumber(istream &is) {
        int d;
        is >> d;
        return d;
    }

    istream &operator>>(istream &input, StudyYear &y) {
        y.SetYear(ReadNumber(input));
        return input;
    }

    Student::Student() {
        this->id = "";
    }

    Student::~Student() {
            //cout<<"destruktor Studenta";
    }

    string Student::Id() {
        return this->id;
    }

    Student::Student(string id_, string name_, string lastName_, string program_, int year_) {
        id= id_;
        firstName = name_;
        lastName = lastName_;
        program = program_;
        year.SetYear(year_);
    }

    string Student::Program() {
        return this->program;
    }

    string Student::LastName() {
        return this->lastName;
    }

    string Student::FirstName() {
        return this->firstName;
    }

    StudyYear Student::Year() {
        return this->year.study_year;
    }

    void Student::ChangeLastName(string newLastName) {
        lastName = newLastName;
    }

    bool Student::operator==(Student another_student) const {
        return this->id == another_student.id;
    }

    StudentRepository::StudentRepository() {
        studentCount = 0;
    }

    int StudentRepository::StudentCount() {
        return studentCount;
    }

    StudentRepository::StudentRepository(std::initializer_list<Student> list) {
        studentCount = 0;
        for(auto iter : list) {
            repository.emplace_back(iter);
            studentCount ++;
        }
    }

    Student &StudentRepository::operator[](string id) {
        for (auto &iter : repository)
        {
            if (id == iter.id)
            {
                return  iter;
            }
        }
        return *repository.begin();
    }

    bool StudentRepository::operator==(StudentRepository another_repository) const{
        for(auto iter : repository) {
            if(!(another_repository[iter.id] == iter)){
                return false;
            }
        }
        return true;
    }
}
