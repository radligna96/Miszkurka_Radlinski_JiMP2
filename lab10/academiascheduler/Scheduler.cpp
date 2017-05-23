//
// Created by radligna on 21.05.17.
//


#include "Scheduler.h"


academia::Schedule academia::Schedule::OfTeacher(int teacher_id) const {

    Schedule tmp_schedule ;
    tmp_schedule.items.resize(items.size());

    auto it = std::copy_if (items.begin(), items.end(), tmp_schedule.items.begin(), //jakis bool );
    tmp_schedule.items.resize((unsigned long) std::distance(tmp_schedule.items.begin(), it));  // shrink container to new size

    return tmp_schedule;

}

academia::Schedule academia::Schedule::OfRoom(int room_id) const {
    return academia::Schedule();
}

academia::Schedule academia::Schedule::OfYear(int year) const {
    return academia::Schedule();
}

std::vector<int> academia::Schedule::AvailableTimeSlots(int n_time_slots) const {
    //return nullptr;
}

void academia::Schedule::InsertScheduleItem(const academia::SchedulingItem &item_) {
    SchedulingItem costam = item_;
    items.emplace_back(costam);
}

size_t academia::Schedule::Size() const {
    return 0;
}

academia::Schedule academia::GreedyScheduler::PrepareNewSchedule(const std::vector<int> &rooms,
                                                                 const std::map<int, std::vector<int>> &teacher_courses_assignment,
                                                                 const std::map<int, std::set<int>> &courses_of_year,
                                                                 int n_time_slots) {



    return academia::Schedule();
}

academia::SchedulingItem::SchedulingItem(int course_, int teacher_, int room_, int time_slot_, int year_) {
    course_id = course_;
    teacher_id = teacher_;
    room_id = room_;
    time_slot = time_slot_;
    year = year_;

}
