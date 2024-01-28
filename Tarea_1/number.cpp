//
// Created by rudri on 10/11/2020.
//

#include <iostream>
#include "global.h"
#include "number.h"

#include "catch.hpp"
using namespace std;



number_t& number_t::operator++() {
    return *this += 1;
}

number_t number_t::operator--(int) {
    number_t temp(*this);  // Copia el objeto actual
    value--;               // Decrementa el valor del objeto actual
    return temp;           // Devuelve el objeto copiado antes del decremento
}

number_t& number_t::operator+=(const number_t& rhs) {
    value += rhs.get_value();
    return *this;
}

number_t& number_t::operator+=(const T& rhs) {
    value += rhs;
    return *this;
}

number_t& number_t::operator/=(const number_t& rhs) {
    value /= rhs.get_value();
    return *this;
}

number_t& number_t::operator/=(const T& rhs) {
    value /= rhs;
    return *this;
}

number_t& number_t::operator^=(const number_t& rhs) {
    value = pow(value, rhs.get_value());
    return *this;
}

number_t& number_t::operator^=(const T& rhs) {
    value = pow(value, rhs);
    return *this;
}



number_t operator+(const T& num, const number_t& rhs) {
    return number_t{ num + rhs.get_value() };
}

bool operator<(const T& num, const number_t& rhs) {
    return num < rhs.get_value();
}


