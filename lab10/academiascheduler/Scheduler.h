//
// Created by radligna on 21.05.17.
//

#ifndef JIMP_EXERCISES_SCHEDULER_H
#define JIMP_EXERCISES_SCHEDULER_H

#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <set>
#include <functional>
#include <algorithm>

using std::reference_wrapper;
using std::cout;
using std::endl;


namespace academia {



    class SchedulingItem {
    public:
        SchedulingItem(int course_, int teacher_, int room_, int time_slot_, int year_);
        ~SchedulingItem(){};

        int course_id; // no id kursu
        int teacher_id; // - identyfikator nauczyciela akademickiego prowadzącego te zajęcia o tej godzinie
        int room_id; // - identyfikator pomieszczenia w którym odbywają się zajęcia
        int time_slot; // - okno czasowe
        int year; //year - rok studiów na którym obowiązuje przedmiot
    };

    class Schedule {
    public:
        Schedule () {};
        ~Schedule() {};

        Schedule OfTeacher(int teacher_id) const; //wylicza fragment harmonogramu związany z danym nauczycielem akademickim (może się przydać copy_if…)
        Schedule OfRoom(int room_id) const; //sala
        Schedule OfYear(int year) const; // j.w. dla danego roku studiów
        std::vector<int> AvailableTimeSlots(int n_time_slots) const; //wylicza wektor jeszcze nie zajętych okien czasowych, gdzie n_time_slots jest maksymalną wartością okna czasowego
        void InsertScheduleItem(const SchedulingItem &item_); //wstawia nowy element planu
        size_t Size() const; // - zwaraca rozmiar planu

        Schedule (SchedulingItem &items) : item{&items}{

        }

        operator SchedulingItem&(){
            return *item;
        }
        SchedulingItem *item;

        std::vector<reference_wrapper<SchedulingItem>> items;
    };

    class Scheduler {
    public:
        virtual Schedule PrepareNewSchedule(const std::vector<int> &rooms, const std::map<int, std::vector<int>> &teacher_courses_assignment, const std::map<int, std::set<int>> &courses_of_year, int n_time_slots) = 0;


    };

    class GreedyScheduler : public Scheduler{
    public:
        Schedule PrepareNewSchedule(const std::vector<int> &rooms, const std::map<int, std::vector<int>> &teacher_courses_assignment, const std::map<int, std::set<int>> &courses_of_year, int n_time_slots);
        //rooms - dostępne pomieszczenia
        //teacher_courses_assignment - rozpiska nauczycieli (klucz w mapie) i prowadząnych przez nich przedmiotów (wartosć w mapie)
        //courses_of_year - kursy (wartość w mapie) wymagane dla danego rocznika (klucz w mapie)
        //n_time_slots - ilość slotów czasowych


    };


    class NoViableSolutionFound {
    public:
    };

}

#endif //JIMP_EXERCISES_SCHEDULER_H
