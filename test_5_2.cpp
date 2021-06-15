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
    forward_list<int> fl1 {1, 1, 1, 1, 1};
    forward_list<int> fl2 {1, 1, 1, 1, 1, 1, 1};
    cout << boolalpha;
    cout << have_same_elements(fl1, fl2) << endl; // false
#endif
}

TEST_CASE("Pregunta #5_2") {
    execute_test("test_5_2.in", pregunta_5);
}