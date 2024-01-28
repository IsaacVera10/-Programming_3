//
// Created by rudri on 10/11/2020.
//

#ifndef POO2_UNIT_1_CALCULATE_PENTAGON_H
#define POO2_UNIT_1_CALCULATE_PENTAGON_H
#include "number.h"

inline int calculate_pentagon(number_t x) {
    int result=1;
    for(int i=0;i<=x.get_value();i++) {
        result+=(i*5);
    }
    return result;
}


#endif //POO2_UNIT_1_CALCULATE_PENTAGON_H
