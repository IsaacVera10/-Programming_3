//
// Created by rudri on 10/11/2020.
//

#ifndef POO2_UNIT_1_NUMBER_H
#define POO2_UNIT_1_NUMBER_H



#endif //POO2_UNIT_1_NUMBER_H
#include<iostream>
#include<cmath>
using namespace std;

using T = int;

class number_t {
    T value{};
public:
    number_t() = default;//Constructor por defecto
    number_t(const T&value) : value{ value } {}//Constructor con parametro
    number_t& operator=(const number_t& rhs) = default;
    operator int (){return int(value);}
    //getter
    [[nodiscard]] T get_value() const { return value; }

    //Sobrecarga de operadores
    number_t& operator++();//Pre-incremento
    number_t operator--(int);//Post-decremento
    number_t& operator+=(const number_t& rhs);
    number_t& operator+=(const T& rhs);
    number_t& operator/=(const number_t& rhs);
    number_t& operator/=(const T& rhs);
    number_t& operator^=(const number_t& rhs);
    number_t& operator^=(const T& rhs);

    number_t operator+(const number_t& rhs) const { return number_t{value+ rhs.get_value() };}
    number_t operator/(const number_t& rhs) {return number_t(value / rhs.get_value());}
    number_t operator/(const T& rhs) {return number_t(value / rhs);}
    number_t operator^(const number_t& rhs) {return number_t(pow(value, rhs.get_value()));}
    number_t operator^(const T& rhs) {return number_t(pow(value, rhs));}
    number_t operator*(const number_t& rhs) {return number_t(value * rhs.get_value());}


    //operadores booleanos
    bool operator==(const number_t& rhs) const{return value == rhs.get_value();}
    bool operator==(const T& rhs) const{return value == rhs;}
    bool operator!=(const number_t& rhs) const{return value != rhs.get_value();}
    bool operator!=(const T& rhs) const{return value != rhs;}
    bool operator<(const number_t& rhs) const{return value < rhs.get_value();}
    bool operator<(const T& rhs) const{return value < rhs;}
    bool operator>(const number_t& rhs) const{return value > rhs.get_value();}
    bool operator>(const T& rhs) const{return value > rhs;}
    bool operator<=(const number_t& rhs) const{return value <= rhs.get_value();}
    bool operator<=(const T& rhs) const{return value <= rhs;}
    bool operator>=(const number_t& rhs) const{return value >= rhs.get_value();}
    bool operator>=(const T& rhs) const{return value >= rhs;}


    //friend function
    friend ostream& operator<<(ostream& os, const number_t& rhs);
    friend istream& operator>>(istream& is, number_t& rhs);

};

inline ostream& operator<<(ostream& os, const number_t& rhs) {
    os << rhs.get_value();
    return os;
}
inline  istream& operator>>(istream& is, number_t& rhs) {
    is >> rhs.value;
    return is;
}