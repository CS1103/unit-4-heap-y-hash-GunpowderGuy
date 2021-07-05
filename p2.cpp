//
// Created by rudri on 10/11/2020.
//

#include <iostream>
#include <vector>
#include "top_distance.h"
#include "global.h"
#include "p1.h"
using namespace std;

void pregunta_2() {
#ifdef ENABLE_TEST
    vector< point<int> > values = {
            {1, 1}, {1, 2}, {1, 2}, {1, 4}, {1, 5},
            {2, 1}, {2, 2}, {2, 2}, {2, 4}, {2, 5},
            {3, 1}, {3, 2}, {3, 2}, {3, 4}, {3, 5},
            {4, 1}, {4, 2}, {4, 2}, {4, 4}, {4, 5} };
    auto result = top_distance<4, greater<int>>(values, point<int>{0, 0});
    for (const auto& item: result)
        cout << item << endl;
#endif
}
