//
// Created by rudri on 10/11/2020.
//

#include <iostream>
#include "global.h"
#include "have_same_elements.h"
#include <forward_list>
#include <vector>
#include <list>
#include "p5.h"
using namespace std;

void pregunta_5() {
#ifdef ENABLE_TEST
    forward_list<int> fl {1, 2, 3, 4, 5};
    vector<int> vec {1, 2, 3, 3, 4, 5, 5};
    list<int> lst {2, 4, 5, 3, 1};
    cout << boolalpha;
    cout << have_same_elements(fl, vec) << endl; // false
    cout << have_same_elements(fl, lst) << endl; // true
#endif
}
