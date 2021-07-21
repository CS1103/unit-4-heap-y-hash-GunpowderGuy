//
// Created by rudri on 3/8/2021.
//

#include <vector>

#ifndef POO2_UNIT5_WEEK7_TOP_DISTANCE_H
#define POO2_UNIT5_WEEK7_TOP_DISTANCE_H

using namespace std;

template <typename T> struct point {
  T x;
  T y;

  friend std::ostream &operator<<(std::ostream &lhs, const point<T> rhs) {
    return lhs << "{" << rhs.x << ", " << rhs.y << "}";
  }
};

template <int i, typename function>
vector<point<int>> top_distance(const vector<point<int>> &cont,
                                const point<int> origen) {
  return vector<point<int>>();
}

#endif // POO2_UNIT5_WEEK7_TOP_DISTANCE_H
