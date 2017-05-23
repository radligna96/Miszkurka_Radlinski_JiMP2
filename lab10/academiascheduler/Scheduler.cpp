//
// Created by radligna on 21.05.17.
//


#include "Scheduler.h"


academia::Schedule academia::Schedule::OfTeacher(int teacher_id_) const {
    Schedule tmp_schedule ;
/*
    tmp_schedule.items.resize(items.size());
    auto it = std::copy_if (items.begin(), items.end(), tmp_schedule.items.begin(), [](int i){return i == 1;});
    tmp_schedule.items.resize((unsigned long) std::distance(tmp_schedule.items.begin(), it));  // shrink container to new size
*/
    for(int iter=0; iter<items.size(); iter++ ){
        if(items[iter].teacher_id == teacher_id_)
            tmp_schedule.items.emplace_back(items[iter]);
    }
    return tmp_schedule;
}

academia::Schedule academia::Schedule::OfRoom(int room_id) const {
    Schedule tmp_schedule ;
    for(int iter=0; iter<items.size(); iter++ ){
        if(items[iter].room_id == room_id)
            tmp_schedule.items.emplace_back(items[iter]);
    }
    return tmp_schedule;
}

academia::Schedule academia::Schedule::OfYear(int year) const {
    Schedule tmp_schedule ;
    for(int iter=0; iter<items.size(); iter++ ){
        if(items[iter].year == year)
            tmp_schedule.items.emplace_back(items[iter]);
    }
    return tmp_schedule;
}

std::vector<int> academia::Schedule::AvailableTimeSlots(int n_time_slots) const {
    std::vector <int> free_slots;
    for (int i=1; i<=n_time_slots; i++){
        free_slots.emplace_back(i);
    }


    std::vector<int> v_intersection;
    std::vector<int> definite_time_slots;

    std::set_intersection(taken_time_slots.begin(), taken_time_slots.end(),
                          free_slots.begin(), free_slots.end(),
                          std::back_inserter(v_intersection));

    std::set_difference(free_slots.begin(), free_slots.end(),
                        v_intersection.begin(), v_intersection.end(),
                        std::back_inserter(definite_time_slots));

    return definite_time_slots;
}

void academia::Schedule::InsertScheduleItem(const academia::SchedulingItem &item_) {
    SchedulingItem costam = item_;
    taken_time_slots.emplace_back(item_.time_slot);
    items.emplace_back(costam);
}

academia::SchedulingItem academia::Schedule::operator[](int iter) const {
    return items[iter];
}

size_t academia::Schedule::Size() const {
    return items.size();
}



academia::Schedule academia::GreedyScheduler::PrepareNewSchedule(const std::vector<int> &rooms,
                                                                 const std::map<int, std::vector<int>> &teacher_courses_assignment,
                                                                 const std::map<int, std::set<int>> &courses_of_year,
                                                                 int n_time_slots) {

    int teachers_time_slots=0;
    for (auto teacher : teacher_courses_assignment)
    {
        teachers_time_slots += teacher.second.size();
    }

    if(n_time_slots < teachers_time_slots)
        throw NoViableSolutionFound();

    Schedule new_schedule{};



    return academia::Schedule();
}

academia::SchedulingItem::SchedulingItem(int course_, int teacher_, int room_, int time_slot_, int year_) {
    course_id = course_;
    teacher_id = teacher_;
    room_id = room_;
    time_slot = time_slot_;
    year = year_;
}

int academia::SchedulingItem::CourseId() const {
    return course_id;
}

int academia::SchedulingItem::TeacherId() const {
    return teacher_id;
}

int academia::SchedulingItem::RoomId() const {
    return room_id;
}

int academia::SchedulingItem::TimeSlot() const{
    return time_slot;
}

int academia::SchedulingItem::Year() const {
    return year;
}
