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
    vector<int> vec {};
    list<int> lst {};
    cout << boolalpha;
    cout << have_same_elements(vec, lst) << endl; // true
#endif
}

TEST_CASE("Pregunta #5_3") {
    execute_test("test_5_3.in", pregunta_5);
}