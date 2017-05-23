//
// Created by radligna on 21.05.17.
//


#include "Scheduler.h"


academia::Schedule academia::Schedule::OfTeacher(int teacher_id_) const {
    Schedule tmp_schedule ;

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

academia::Schedule::Schedule(std::vector<academia::SchedulingItem> item_v) {
    for(auto item : item_v){
        InsertScheduleItem(item);
    }
}


academia::Schedule academia::GreedyScheduler::PrepareNewSchedule(const std::vector<int> &rooms,
                                                                 const std::map<int, std::vector<int>> &teacher_courses_assignment,
                                                                 const std::map<int, std::set<int>> &courses_of_year,
                                                                 int n_time_slots) {

    std::vector<SchedulingItem> scheduling_items;
    std::vector<std::pair<int, int>> rooms_time_slots_pairs;

    for(auto year_course = courses_of_year.begin(); year_course != courses_of_year.end(); ++year_course)
    {
        for(int course : year_course->second)
        {
            int course_number = 0;
            for(auto teacher_course = teacher_courses_assignment.begin(); teacher_course != teacher_courses_assignment.end(); ++teacher_course)
            {
                for(int teacher_course_id : teacher_course->second)
                {
                    if(teacher_course_id == course)
                    {
                        course_number++;
                    }
                }
            }
            if(course_number > n_time_slots)
            {
                throw NoViableSolutionFound{};
            }
        }
    }

    for(auto teacher_course = teacher_courses_assignment.begin(); teacher_course != teacher_courses_assignment.end(); ++teacher_course)
    {
        for(int course : teacher_course->second)
        {
            for(auto year_course = courses_of_year.begin(); year_course != courses_of_year.end(); ++year_course)
            {
                if(year_course->second.find(course) != year_course->second.end())
                {
                    scheduling_items.push_back(SchedulingItem(course, teacher_course->first, 0, 0, year_course->first));
                }
            }
        }
    }

    for(auto room : rooms)
    {
        for(int time_slot = 1; time_slot <= n_time_slots; time_slot++)
        {
            rooms_time_slots_pairs.push_back(std::make_pair<int,int>(std::move(room), std::move(time_slot)));
        }
    }

    if(scheduling_items.size() > rooms_time_slots_pairs.size())
    {
        throw NoViableSolutionFound{};
    }

    for(int i=0; i< scheduling_items.size(); i++)
    {
        scheduling_items[i].time_slot = rooms_time_slots_pairs[i].second;
        scheduling_items[i].room_id = rooms_time_slots_pairs[i].first;
    }

    return Schedule{scheduling_items};
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
