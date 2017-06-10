//
// Created by radligna on 21.05.17.
//

#include <Scheduler.h>
using namespace academia;

int main() {
    
    Schedule schedule;
    schedule.InsertScheduleItem(SchedulingItem {1,2,3,4,5});
    schedule.InsertScheduleItem(SchedulingItem {1,1,3,4,5});
    schedule.InsertScheduleItem(SchedulingItem {1,2,3,4,6});

    std::set<int> secik {10,20};
    std::cout<<secik.size()<<"";
    return 0;
}