//
// Created by rudri on 3/8/2021.
//

#include <algorithm>
#include <list>
#include <unordered_set>

using namespace std;

#ifndef POO2_UNIT5_WEEK7_REMOVE_DUPLICATES_H
#define POO2_UNIT5_WEEK7_REMOVE_DUPLICATES_H

template <typename T1, template <typename> typename T2,
          template <typename> typename T3>
list<int> remove_duplicates(list<int> cont) {
  unordered_set<int> s(cont.begin(), cont.end());
  list<int> result;
  result.assign(s.begin(), s.end());

  return result;
}

template <typename Cont> Cont remove_duplicates(const Cont cont) {
  unordered_set<double> s(cont.begin(), cont.end());
  Cont result(s.size());

  // result.assign(s.begin(), s.end());

  copy_if(cont.begin(), cont.end(), result.begin(), [&s](double x) {
    unordered_set<double>::iterator encontrado = find(s.begin(), s.end(), x);
    if (encontrado != s.end()) {
      s.erase(encontrado);
      return true;
    } else {
      return false;
    }
  });

  return result;
}

#endif // POO2_UNIT5_WEEK7_REMOVE_DUPLICATES_H
