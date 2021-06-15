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
    string text = "pedro perez pitan pintor perpetuo pinta paisajes por poco precio "
                  "para poder partir pronto para Paris.";
    string result = find_min_subtext(text, "pn");
    cout << result;
#endif
}

TEST_CASE("Pregunta #3_4") {
    execute_test("test_3_4.in", pregunta_3);
}