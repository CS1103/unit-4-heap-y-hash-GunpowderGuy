//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "global.h"
#include "median.h"
using namespace std;

static void pregunta_1() {
#ifdef ENABLE_TEST
    median<int> m {1};
    cout << m << endl;
#endif
}

TEST_CASE("Pregunta #1_4") {
    execute_test("test_1_4.in", pregunta_1);
}