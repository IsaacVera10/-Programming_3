//
// Created by rudri on 10/11/2020.
//

#ifndef POO2_UNIT_1_SEARCH_ODDS_H
#define POO2_UNIT_1_SEARCH_ODDS_H

#include "number.h"
#include<vector>
#include<map>
#include<initializer_list>
#include <string>

inline vector<number_t> search_odds( vector<number_t>&& values) {

    map<number_t, T> count_map;
    vector<number_t> result;
    for(int i=0;i<values.size();i++)
        count_map[values[i]]++;

    for(auto it=count_map.begin();it!=count_map.end();it++){
        if(it->second%2!=0)
            result.push_back(it->first);
    }
    return result;
}


#endif //POO2_UNIT_1_SEARCH_ODDS_H
