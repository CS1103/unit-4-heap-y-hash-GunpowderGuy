//
// Created by rudri on 3/8/2021.
//

#include <unordered_set>

using namespace std;

#ifndef POO2_UNIT5_WEEK7_REMOVE_DUPLICATES_H
#define POO2_UNIT5_WEEK7_REMOVE_DUPLICATES_H

template <typename Cont> Cont remove_duplicates(Cont cont) {
  unordered_set<int> s(cont.begin(), cont.end());
  Cont result;
  result.assign(s.begin(), s.end());
}

#endif // POO2_UNIT5_WEEK7_REMOVE_DUPLICATES_H
