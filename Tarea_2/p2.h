//
// Created by rudri on 10/11/2020.
//

#ifndef POO2_UNIT2_TASK2_V2021_P2_H
#define POO2_UNIT2_TASK2_V2021_P2_H

#include <fstream>
#include <string>
#include <vector>
#include <list>
#include <typeinfo>
using namespace std;

template<typename T, typename M>
void print(T first, T last, M& os, string sep){

    while(first != last){
        os << *first;
        if (next(first) != last)
            os << sep;
        first++;
    }

    if (typeid(os) == typeid(std::ofstream)){
        static_cast<std::ofstream&>(os).close();
    }
}

void question_2_1();
void question_2_2();
void question_2_3();
void question_2_4();

#endif //POO2_UNIT2_TASK2_V2021_P2_H
