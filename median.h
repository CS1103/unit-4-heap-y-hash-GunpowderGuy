//
// Created by rudri on 3/8/2021.
//
#ifndef POO2_UNIT5_WEEK7_MEDIAN_H
#define POO2_UNIT5_WEEK7_MEDIAN_H

#include <initializer_list>
#include <iostream>
#include <vector>

using namespace std;

template <typename T> class median {
  vector<T> vec;

public:
  median(initializer_list<T> l) : vec(l) {}

  T mediana() const { return 1; }
};

template <typename T> ostream &operator<<(ostream &os, const median<T> &t) {
  os << t.mediana();
  return os;
}

#endif // POO2_UNIT5_WEEK7_MEDIAN_H
