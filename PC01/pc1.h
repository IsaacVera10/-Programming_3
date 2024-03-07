//
// Created by rudri on 5/31/2021.
//

#ifndef POO2_PC1_SEC01_PC1_H
#define POO2_PC1_SEC01_PC1_H

#include <iostream>
#include <initializer_list>
#include <vector>
using namespace std;

// Pregunta #1
class generate_vector_t{
    vector<int> items;
    vector<int>::iterator it;
    int block_size = 6;
public:
    generate_vector_t(initializer_list<int> items){
        this->items = items;
        it = this->items.begin();
    }
    //Constructor por copia
    generate_vector_t(const generate_vector_t& other){
        this->items = other.items;
        this->it = begin(items);
        this->block_size = other.block_size;
    }

    void set_block_size(int value){ block_size = value; }
    void next_block(){
        if(it + block_size < items.end()){
            it += block_size;
        }
    }
    void before_block(){
        if(it - block_size >= items.begin()){
            it -= block_size;
        }
    }
    void first_block(){
        it = items.begin();
    }
    void last_block(){
        it = begin(items);
        while(it + block_size < items.end()){
            it += block_size;
        }
    }



    //Sobrecarga del operador()
    vector<int> operator()(){
        vector<int> result;
        auto it_temp = it;
        for(int i = 0; i < block_size; i++){
            result.push_back(*it_temp);
            it_temp++;
            if(it_temp == items.end()){
                break;
            }
        }
        return result;
    }


    void get_punt(){
        cout << *it << endl;
    }

};

// Pregunta #2
template<typename Contenedor>
auto generate_fibonacci_shape(const Contenedor& contenedor, int n){
    vector<Contenedor> result(n);
    Contenedor temp;
    int a = 0, b = 1,temporal=0;
    auto it = contenedor.begin();
    for(int i = 0; i < n; i++){
        for(int j=0;j<b;j++){
            if(it != contenedor.end()){
                temp.push_back(*it);
                it++;
            }else{
                temp.push_back(0);
            }
        }
        result[i] = temp;
        temp.clear();
        temporal = b;
        b = a + b;
        a = temporal;
    }
    return result;
}


// Pregunta #3 y Pregunta #4


#endif //POO2_PC1_SEC01_PC1_H
