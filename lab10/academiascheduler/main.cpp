//
// Created by radligna on 21.05.17.
//

#include <Scheduler.h>
using namespace academia;

int main() {
    
    Schedule schedule;
    schedule.InsertScheduleItem(SchedulingItem {1,2,3,4,5});
    schedule.InsertScheduleItem(SchedulingItem {1,2,3,4,5});
    schedule.InsertScheduleItem(SchedulingItem {1,2,3,4,5});

    std::vector<reference_wrapper<SchedulingItem>> vector;
    SchedulingItem  cos {1,23,4,5,6} ;
    SchedulingItem * costam = new SchedulingItem {1,2,34,5,6};

    vector.emplace_back(cos);


    for(auto element : schedule.items)
    {
        cout<<"mam cos ";
    }

    cout<<endl;


    cout<<endl<<" o ";
    return 0;
}