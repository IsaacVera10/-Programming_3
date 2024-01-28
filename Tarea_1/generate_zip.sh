#!/usr/bin/env bash

project_name='poo2_unit_1'
source_code='
  p1.h p1.cpp
  p2.h p2.cpp
  p3.h p3.cpp
  p4.h p4.cpp
  number.h number.cpp
  search_odds.h search_odds.cpp
  calculate_pentagon.h calculate_pentagon.cpp
  quick_sort.h quick_sort.cpp
'
rm -f ${project_name}.zip
zip -r -S ${project_name} ${source_code}