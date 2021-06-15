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
    string text = "El rey de constantinopla esta constantinoplizado. "
                  "consta que constanza, no lo pudo desconstantinoplizar. "
                  "El desconstantinoplizador que desconstantinoplizare "
                  "al rey de constantinopla, buen desconstantinoplizador será.";
    string result = find_min_subtext(text, "csp");
    cout << result;
#endif
}

TEST_CASE("Pregunta #3_2") {
    execute_test("test_3_2.in", pregunta_3);
}