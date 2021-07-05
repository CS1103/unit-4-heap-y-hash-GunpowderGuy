//
// Created by rudri on 10/11/2020.
//

#include <iostream>
#include "global.h"
#include "median.h"
#include "p1.h"
using namespace std;

void pregunta_1() {
#ifdef ENABLE_TEST
    median<int> m {1, 2, 3, 5};
    cout << m << endl;
#endif
}
