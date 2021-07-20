//
// Created by rudri on 3/8/2021.
//

#include <algorithm>
#include <map>
#include <set>
#include <unordered_map>
#include <utility>
#include <vector>

using namespace std;

#ifndef POO2_UNIT5_WEEK7_CRISSCROSS_PAIRS_H
#define POO2_UNIT5_WEEK7_CRISSCROSS_PAIRS_H

using sorted_pair = pair<int, int>;

inline sorted_pair sort(sorted_pair in) {
  if (in.first < in.second) {
    return in;
  } else {
    return make_pair(in.second, in.first);
  }
}

struct pairhash {
public:
  template <typename T, typename U>
  std::size_t operator()(const std::pair<T, U> &x) const {
    return std::hash<T>()(x.first) ^ std::hash<U>()(x.second);
  }
};

inline bool comparar(sorted_pair a, sorted_pair b) {
  if ((a.first + a.second) == (b.first + b.second)) {
    return a > b;
  } else {
    return a.first + a.second > b.first + b.second;
  }
  // return a.first + a.second < b.first + b.second;
}

inline vector<sorted_pair> crisscross_pairs(const vector<sorted_pair> &in) {
  // unordered_multimap<sorted_pair, sorted_pair, pairhash> temp;
  multimap<sorted_pair, sorted_pair> temp;

  for (auto elem : in) {
    temp.emplace(make_pair(sort(elem), elem));
  }

  std::vector<sorted_pair> values(temp.size());

  // set<sorted_pair, decltype(comparar)*> values2;
  vector<sorted_pair> values2;

  std::transform(temp.begin(), temp.end(), values.begin(),
                 [](const auto &value) { return value.second; });

  for (const auto elem : values) {
    if (temp.count(sort(elem)) >= 2 &&
        (find(values2.begin(), values2.end(), elem) == values2.end())) {
      values2.push_back(elem);
    }
  }

  // vector<sorted_pair> values3(values2.begin(), values2.end());

  return values2;
}

#endif // POO2_UNIT5_WEEK7_CRISSCROSS_PAIRS_H
