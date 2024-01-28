//
// Created by rudri on 10/11/2020.
//

#ifndef POO2_UNIT2_TASK2_V2021_P3_H
#define POO2_UNIT2_TASK2_V2021_P3_H

using namespace std;

template<typename iter>
double sumarizar(iter first, iter last, double init) {
    for (auto it = first; it != last; it++)
        init += *it;
    return init;
}

void question_3_1();
void question_3_2();
void question_3_3();
void question_3_4();

#endif //POO2_UNIT2_TASK2_V2021_P3_H
