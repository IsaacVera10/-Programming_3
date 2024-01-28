//
// Created by rudri on 10/11/2020.
//

#include <iostream>
#include "global.h"
#include "p1.h"
using namespace std;


void question_1_1(){
#ifdef ENABLE_TEST
    number_t n1;
    cin >> n1;
    number_t n2{ 20 };
    number_t n3 = n1 + n2;
    number_t n4;
    number_t n5;
	const number_t n6 = n5;

	number_t* n7 = new number_t(5);
    number_t* n8 = new number_t;
    cin >> *n8;
	
    cout << n1 << endl;
    cout << n2 << endl;
    cout << n3 << endl;
    n4 = 10 + n3;
    cout << n4 << endl;
    n5 = n2 + n3;
    cout << n5 << endl;
    cout << n6 << endl;
    cout << *n7 << endl;
	cout << *n8 << endl;
    delete n8;
    delete n7;
#endif
}

void question_1_2(){
#ifdef ENABLE_TEST
    number_t n1{ 10 };
    number_t n2{ 20 };
    number_t n3 = n1 + n2;
    number_t n4;
    number_t n5;
    cout << boolalpha;
    cout << (n2 >= n1) << endl;
    cout << (n2 <= n3) << endl;
    cout << (n2 > n1) << endl;
    cout << (n2 < n3) << endl;
    cout << (n3 == 30) << endl;
    n4 = 10 + n3;
    cout << (n4 != n3) << endl;
    cout << (n4 != 40) << endl;
    n5 = n2 + n3;
    cout << (n4 >= 40) << endl;
    cout << (n5 <= 50) << endl;
    cout << (n4 > 40) << endl;
    cout << (n5 < 50) << endl;
#endif
}

void question_1_3(){
#ifdef ENABLE_TEST
    number_t n;
    cin >> n;
    number_t suma;
    number_t value;
    for (int i = 0; i < n; ++i)
    {
        cin >> value;
        suma += value;
    }
    cout << suma << endl;

    number_t total;
    for (int i = 0; i < n; ++i)
        ++total;
    cout << total << endl;

    for (int i = n; i > 0; --i)
        total--;
    cout << total << endl;
#endif
}

void question_1_4(){
#ifdef ENABLE_TEST
    number_t n1;
    number_t n2;
    cin >> n1;
    cin >> n2;
    number_t n3 = 2;
    cout << (n2 / n1) << endl;
    cout << (n2 / 2) << endl;
    cout << (n2 ^ n3) << endl;
    cout << (n2 ^ 4) << endl;

    number_t n4 = n2 / n1;
    cout << n4 << endl;
    n4 += n2;
    cout << n4 << endl;
    n4 += 20;
    cout << n4 << endl;

    number_t n5 = n2 * n1;
    cout << n5 << endl;
    n5 /= n2;
    cout << n5 << endl;
    n5 /= 20;
    cout << n5 << endl;

    number_t n6 = 12;
    cout << n6 << endl;
    number_t n7 = 2;
    n6 ^= n7;
    cout << n6 << endl;
    n6 ^= 2;
    cout << n6 << endl;
#endif
}
