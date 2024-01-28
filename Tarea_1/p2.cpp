//
// Created by rudri on 10/11/2020.
//

#include <iostream>
#include "global.h"
#include "p2.h"
using namespace std;


void question_2_1(){
#ifdef ENABLE_TEST
	auto r = search_odds({ 1, 1, 2, -2, 5, 2, 4, 4, -1, -2, 5 });
	cout << r.front() << endl;
#endif
}

void question_2_2(){
#ifdef ENABLE_TEST
	auto r = search_odds({ 20, 1, 1, 2, 2, 3, 3, 5, 5, 4, 20, 4, 5 });
	cout << r.front() << endl;
#endif
}

void question_2_3(){
#ifdef ENABLE_TEST
	auto r = search_odds({ 1 });
	cout << r.front() << endl;
#endif
}

void question_2_4(){
#ifdef ENABLE_TEST
	auto r = search_odds({ });
	if (!r.empty())
		cout << r.front() << endl;
	else
		cout << "vacio\n";
#endif
}
