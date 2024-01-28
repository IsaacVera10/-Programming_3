//
// Created by rudri on 10/11/2020.
//

#include <iostream>
#include "global.h"
#include "quick_sort.h"
using namespace std;

quicksort_t::quicksort_t(initializer_list<int> lst):v1(lst){}

vector<int> quicksort_t::get_v1(){return v1;}


int partition(vector<int>& array, int start, int end) {
    int left;
    int right;
    int pivot;
    int temp;
    pivot = array[start];
    left = start;
    right = end;
    while (left < right) {
        while (array[right] > pivot) {right--;}
        while ((left < right) && (array[left] <= pivot)) {left++;}
        if (left < right) {temp = array[left];array[left] = array[right];array[right] = temp;}}
    temp = array[right];
    array[right] = array[start];
    array[start] = temp;
    return right;
}
quicksort_t::operator int (){
    quick_sort(v1,0,v1.size()-1);
    for( int j=0;j<v1.size();j++)
        cout<<v1[j]<<" ";
}
void quicksort_t::quick_sort(vector<int>& array, int start, int end)
{
    int pivot;
    if (start < end) {
        pivot = partition(array, start, end);
        quick_sort(array, start, pivot - 1);
        quick_sort(array, pivot + 1, end);
    }
}

istream& quicksort_t::operator>>(string arch){
    ofstream archivo;
    archivo.open(arch,ios::app);
    if(archivo.fail()){
        cout<<"No se pudo abrir el archivo";
        exit(1);
    }
    for(int i=0;i<v1.size();i++){
        archivo<<v1[i]<<" ";
    }
    archivo.close();
}

void quicksort_t::operator<<(string arch){
    ifstream archivo(arch);
    int num;
    while(archivo>>num){
        v1.push_back(num);
    }
    quick_sort(v1,0,v1.size()-1);
}
