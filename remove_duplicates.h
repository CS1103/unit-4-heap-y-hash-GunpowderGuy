//
// Created by rudri on 3/8/2021.
//

#include <list>
#include <unordered_set>

using namespace std;

#ifndef POO2_UNIT5_WEEK7_REMOVE_DUPLICATES_H
#define POO2_UNIT5_WEEK7_REMOVE_DUPLICATES_H

template <typename T1, typename T2, typename T3>
list<int> remove_duplicates(list<int> cont) {
  unordered_set<int> s(cont.begin(), cont.end());
  list<int> result;
  result.assign(s.begin(), s.end());

  return result;
}

template <typename Cont> Cont remove_duplicates(Cont cont) {
  unordered_set<int> s(cont.begin(), cont.end());
  Cont result;
  result.assign(s.begin(), s.end());

  return result;
}

#endif // POO2_UNIT5_WEEK7_REMOVE_DUPLICATES_H
