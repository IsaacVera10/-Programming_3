//
// Created by rudri on 10/18/2020.
//

#ifndef POO2_UNIT2_WEEK_7_2020_2_EXERCISES_H
#define POO2_UNIT2_WEEK_7_2020_2_EXERCISES_H

#include <vector>
#include <iterator>
#include <algorithm>
#include <unordered_set>
#include<list>
#include <iostream>
#include <initializer_list>
#include <tuple>
using namespace std;

//Problema #2
template<typename Contenedor>
auto split_range(Contenedor& cont, int n) {
    vector<Contenedor> res;
    int size = distance(cont.begin(), cont.end());
    int elemnts = size/n;
    auto it = begin(cont);
    Contenedor temp;
    for(int i=0;i<n;i++){
        if(i==n-1){
            temp.resize(distance(it, end(cont)));
            //Para usar un iterador begin como destino de copy, 
            //el contenedor destino debe tener el tamaño suficiente
            //y no debe estar vacío 
            copy(it, end(cont), begin(temp));
        }else{
            temp.resize(elemnts);
            copy(it, next(it, elemnts), begin(temp));
            advance(it, elemnts);
        }
        
        res.push_back(temp);
        temp.clear();
    }
    return res;

}
//Problema #3
template<typename Contenedor>
auto sum_range(Contenedor& cnt1, Contenedor& cnt2){
    Contenedor cnt_mayor, cnt_menor;
    if(distance(begin(cnt1), end(cnt1)) < distance(begin(cnt2), end(cnt2))){
        cnt_mayor = cnt2;
        cnt_menor = cnt1;
    }else{
        cnt_mayor = cnt1;
        cnt_menor = cnt2;
    }

    auto it_mayor = begin(cnt_mayor);
    auto it_menor = begin(cnt_menor);

    Contenedor result;
    while(it_mayor!=end(cnt_mayor)){
        if(it_menor==end(cnt_menor)) it_menor = begin(cnt_menor);
        result.push_front(*it_mayor + *it_menor);
        it_mayor++;
        it_menor++;
    }
    result.reverse();
    return result;
}

//Problema #4
template<typename Contenedor> 
auto delete_range(Contenedor& cont, int n){
    auto found = find(begin(cont), end(cont), n);
    while(found!=end(cont)){
        found = cont.erase(found);
        found = find(found, end(cont), n);
    }
    return cont;
}

template<typename Contenedor> 
auto delete_range(Contenedor& cont, initializer_list<int> n){
    for(auto i : n){
        auto found = find(begin(cont), end(cont), i);
        while(found!=end(cont)){
            found = cont.erase(found);
            found = find(found, end(cont), i);
        }
    }
    return cont;
}

//Problema #5
template<typename Contenedor>
auto delete_duplicated(Contenedor& cont){
    unordered_set<int> set;
    Contenedor result;
    for(auto i : cont){
        if(set.find(i)==set.end()){
            set.insert(i);
            result.push_back(i);
        }
    }
    return result;
}

//Problema #8
template<typename... Args>
struct Unpacker {
    tuple<Args&...> refs;

    Unpacker(Args&... args) : refs(args...) {}

    Unpacker& operator=(const tuple<Args...>& t) {
        refs = t;
        return *this;
    }
};

template<typename... Args>
Unpacker<Args...> unpack(Args&... args) {
    return Unpacker<Args...>(args...);
}

//Ejercicio #11
template <typename... Containers>
auto zip(const Containers&... containers) {
    using common_type = typename common_type<typename Containers::value_type...>::type;
    list<vector<common_type>> result;
    auto begin_iterators = make_tuple(begin(containers)...);
    auto end_iterators = make_tuple(end(containers)...);

    while (![&]() { return apply([&](auto&... it) { return (... || (it == end(containers))); }, begin_iterators); }()) {
        vector<common_type> temp;
        apply([&](auto&... it) { (temp.push_back(*it), ...); }, begin_iterators);
        result.push_back(temp);
        apply([](auto&... it) { (++it , ...); }, begin_iterators);
    }

    return result;
}
#endif //POO2_UNIT2_WEEK_7_2020_2_EXERCISES_H
