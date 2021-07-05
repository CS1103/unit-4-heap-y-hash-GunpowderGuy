//
// Created by rudri on 10/11/2020.
//

#include <iostream>
#include "global.h"
#include "remove_duplicates.h"
#include <forward_list>
#include "p6.h"
using namespace std;

void pregunta_6() {
#ifdef ENABLE_TEST
    forward_list<double> source {1.7, 2.5, 3, 4, 2.5, 0.5, 1.7, 1.4, 0.5, 3, 3};
    // vector<float> source {1.7, 2.5, 3, 4, 2.5, 0.5, 1.7, 1.4, 0.5, 3, 3};
    // auto result = remove_duplicates<float, forward_list, vector>(flst);
    auto result = remove_duplicates(source);
    for (const auto& item: result)
        cout << item << " ";
    cout << endl;
#endif
}
