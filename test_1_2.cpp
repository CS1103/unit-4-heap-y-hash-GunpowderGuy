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
    median<double> m {1, 2, 2.4, 5};
    cout << m << endl;
#endif
}

TEST_CASE("Pregunta #1_2") {
    execute_test("test_1_2.in", pregunta_1);
}