//
// Created by rudri on 10/11/2020.
//

#ifndef POO2_UNIT_1_QUICK_SORT_H
#define POO2_UNIT_1_QUICK_SORT_H
#include<iostream>
#include<vector>
#include<fstream>
#include<string>
using namespace std;
class quicksort_t{
    vector<int> v1{};
    void quick_sort(vector<int>& array, int start, int end);
public:
    //constructores
    quicksort_t() = default;
    quicksort_t(initializer_list<int>);

    vector<int> get_v1();

    operator int ();
    istream& operator>>(string);
    void operator<<(string);
    friend ostream& operator<<(ofstream& , quicksort_t );
};


#endif //POO2_UNIT_1_QUICK_SORT_H
