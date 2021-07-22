//
// Created by rudri on 3/8/2021.
//

#include <algorithm>
#include <cmath>
#include <functional>
#include <ostream>
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

  bool operator==(const point<T> &an) const {
    return this->x == an.x && this->y == an.y;
  }
};

inline int distancia(const point<int> a, const point<int> b) {
  return pow(a.x - b.x, 2) + pow(a.y - b.y, 2);
}

class compare { // almost finished exercise 
  point<int> centro;

public:
  compare(point<int> var) : centro(var) {}

  bool operator()(point<int> a, point<int> b) {
    return distancia(a, centro) > distancia(b, centro);
  }
};

// vector<point<int>>
template <int i, typename function> // greater and less not implemented
inline vector<point<int>> top_distance(const vector<point<int>> &cont,
                                       const point<int> origen) {

  // std::vector<int> vec{3, 1, 4, 1, 5};
  // std::priority_queue<int> pq3{std::less<int>(), vec};

  priority_queue<point<int>, vector<point<int>>, compare> mi_heap{
      compare(origen), cont};

  vector<point<int>> result;

  for (int j = 0; j < cont.size(); j++) {
    result.push_back(mi_heap.top());
    mi_heap.pop();
  }

  // unique(result.begin(), result.end());

  const int tamanno = cont.size();
  result.resize(min(i, tamanno));

  return result;
}

#endif // POO2_UNIT5_WEEK7_TOP_DISTANCE_H
