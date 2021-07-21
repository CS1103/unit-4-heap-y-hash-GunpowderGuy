//
// Created by rudri on 3/8/2021.
//

#include <cmath>
#include <functional>
#include <queue>
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

inline int distancia(const point<int> a, const point<int> b) {
  return pow(a.x - b.x, 2) + pow(a.y - b.y, 2);
}

class comparasion{
  point<int> centro;

  public:

  comparasion(point<int> var) : centro(var) {}
};

template <int i, typename function>
inline vector<point<int>> top_distance(const vector<point<int>> &cont,
                                const point<int> origen) {

  std::vector<int> vec{3, 1, 4, 1, 5};
  std::priority_queue<int> pq3{std::less<int>(), vec};

  priority_queue<point<int>> heap; //{less<point<int>>(), cont};

  return vector<point<int>>();
}

#endif // POO2_UNIT5_WEEK7_TOP_DISTANCE_H
