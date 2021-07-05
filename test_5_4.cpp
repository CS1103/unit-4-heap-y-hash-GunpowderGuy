//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "global.h"
#include "have_same_elements.h"
#include <forward_list>
using namespace std;

static void pregunta_5() {
#ifdef ENABLE_TEST
    forward_list<double> fl {1.1, 3.0, 4.5, 3.5, 2.2};
    vector<double> vec {1.1, 2.2, 3.0, 3.5, 4.5};
    cout << boolalpha;
    cout << have_same_elements(fl, vec) << endl; // true
#endif
}

TEST_CASE("Pregunta #5_4") {
    execute_test("test_5_4.in", pregunta_5);
}