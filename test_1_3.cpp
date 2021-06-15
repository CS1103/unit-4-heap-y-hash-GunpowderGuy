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
    median<float> m {1, 2, 5, 6, 7, 3, 11, 2, 4, 3, 7};
    cout << m << endl;
#endif
}

TEST_CASE("Pregunta #1_3") {
    execute_test("test_1_3.in", pregunta_1);
}