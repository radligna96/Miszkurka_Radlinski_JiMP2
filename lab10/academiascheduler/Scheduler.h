//
// Created by radligna on 21.05.17.
//

#ifndef JIMP_EXERCISES_SCHEDULER_H
#define JIMP_EXERCISES_SCHEDULER_H

#include <iostream>
#include <string>

using std::cout;


namespace academia {
    class Scheduler {

    };


    class SchedulingItem {
    public:
        int course_id; // no id kursu
        int teacher_id; // - identyfikator nauczyciela akademickiego prowadzącego te zajęcia o tej godzinie
        int room_id; // - identyfikator pomieszczenia w którym odbywają się zajęcia
        int time_slot; // - okno czasowe
        int year; //year - rok studiów na którym obowiązuje przedmiot
    };

    class Schedule {

    };

    class GreedyScheduler {


    };


    class NoViableSolutionFound {

    };

}

#endif //JIMP_EXERCISES_SCHEDULER_H
