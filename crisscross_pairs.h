//
// Created by rudri on 3/8/2021.
//

#include <algorithm>
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

inline vector<sorted_pair> crisscross_pairs(vector<sorted_pair> in) {
  unordered_multimap<sorted_pair, sorted_pair, pairhash> temp;

  for (auto elem : in) {
    temp.emplace(make_pair(sort(elem), elem));
  }

  std::vector<sorted_pair> values(temp.size());
  std::transform(temp.begin(), temp.end(), values.begin(),
                 [](const auto &value) { return value.second; });
  return values;
}

#endif // POO2_UNIT5_WEEK7_CRISSCROSS_PAIRS_H
