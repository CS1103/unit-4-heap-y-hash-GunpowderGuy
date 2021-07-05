//
// Created by rudri on 10/11/2020.
//

#include <iostream>
#include "global.h"
#include <string>
#include "p3.h"
#include "find_min_subtext.h"
using namespace std;

void pregunta_3() {
#ifdef ENABLE_TEST
    string text = "ABNT AuToN AuTooN sArTeN ATeN";
    string result = find_min_subtext(text, "ATN");
    cout << result;
#endif
}
