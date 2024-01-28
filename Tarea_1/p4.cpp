//
// Created by rudri on 10/11/2020.
//

#include <iostream>
#include <fstream>
#include "global.h"
#include "p4.h"
using namespace std;


void question_4_1(){
#ifdef ENABLE_TEST
    {
        quicksort_t qs;
        qs << "in_4_1.txt";
        qs >> "out_4_1.txt";
    }
    ifstream file("out_4_1.txt");

    int value = 0;
    while (file >> value)
        cout << value << " ";
    cout << endl;
#endif
}

void question_4_2(){
#ifdef ENABLE_TEST
    {
        quicksort_t qs;
        qs << "in_4_2.txt";
        qs >> "out_4_2.txt";
    }
    ifstream file("out_4_2.txt");

    int value = 0;
    while (file >> value)
        cout << value << " ";
    cout << endl;
#endif
}

void question_4_3(){
#ifdef ENABLE_TEST
    quicksort_t qs = { 10, 4, 1, 3, 7, 8, -4, -3, 100, 2, 9};
    cout << qs << endl;
#endif
}

void question_4_4(){
#ifdef ENABLE_TEST
    {
        quicksort_t qs;
        qs << "in_4_4.txt";
        qs >> "out_4_4.txt";
    }
    ifstream file("out_4_4.txt");

    int value = 0;
    while (file >> value)
        cout << value << " ";
    cout << endl;
#endif
}
