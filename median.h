//
// Created by rudri on 3/8/2021.
//
#ifndef POO2_UNIT5_WEEK7_MEDIAN_H
#define POO2_UNIT5_WEEK7_MEDIAN_H

#include <initializer_list>
#include <iostream>
#include <vector>

#include <algorithm>
#include <string>

using namespace std;

template <typename T> class median {
  vector<T> vec;

  T mediana() {
    sort(vec.begin(), vec.end());

    
     if (vec.size() % 2 != 0) {
       return vec[vec.size() / 2];
     } else {
       return 0.5 * (vec[vec.size() / 2 - 1] + vec[vec.size() / 2]);
     }
    

    // return vec[vec.size()/2 - 1];
  }

public:
  median(initializer_list<T> l) : vec(l) {}

  friend std::ostream &operator<<(std::ostream &lhs, median &rhs) {
    return lhs << rhs.mediana();
  }
};

#endif // POO2_UNIT5_WEEK7_MEDIAN_H
