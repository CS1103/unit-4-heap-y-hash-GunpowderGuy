//
// Created by rudri on 10/11/2020.
//

#include <iostream>
#include "global.h"
#include "crisscross_pairs.h"
#include <vector>
#include <utility>
#include "p4.h"
using namespace std;

void pregunta_4() {
#ifdef ENABLE_TEST
    using sorted_pair = std::pair<int, int>;
    vector<sorted_pair> vec {
        {1, 2}, {1, 1}, {2, 1}, {1, 4}, {3, 2}, {4,1}};
    auto result = crisscross_pairs(vec);
    for (const auto& item: result)
        cout << item.first << " " << item.second << endl;
#endif
}
