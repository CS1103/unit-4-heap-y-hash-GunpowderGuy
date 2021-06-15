//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "global.h"
#include "find_min_subtext.h"
#include <string>
using namespace std;

static void pregunta_3() {
#ifdef ENABLE_TEST
    string text = "El hipopotamo Hipo está con hipo, ¿quien le quita el hipo"
                  " al hipopotamo Hipo";
    string result = find_min_subtext(text, "hpm");
    cout << result;
#endif
}

TEST_CASE("Pregunta #3_3") {
    execute_test("test_3_3.in", pregunta_3);
}