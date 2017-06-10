//
// Created by radligna on 10.06.17.
//

#ifndef JIMP_EXERCISES_SEQUENTIALGENERATOR_H
#define JIMP_EXERCISES_SEQUENTIALGENERATOR_H


#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;


//WSZYSTKIE TESTY PRZECHODZA

template <class ID_TYPE,class SIMPLE_TYPE>
class SequentialIdGenerator {
public:
    SequentialIdGenerator(){
            is_head = true;
            counter = 0;
    }
    SequentialIdGenerator(SIMPLE_TYPE cos){
            is_head = true;
            counter = cos;
    }

    ID_TYPE NextValue(){
        if(!is_head)
                ++counter;
        is_head = false;
        return ID_TYPE (counter);
    }

private:
    bool is_head;
    SIMPLE_TYPE counter;
};




#endif //JIMP_EXERCISES_SEQUENTIALGENERATOR_H
