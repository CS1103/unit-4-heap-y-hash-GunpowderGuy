//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "global.h"
#include "p2.h"
using namespace std;

TEST_CASE("Pregunta #2_1") {
    execute_test("test_2_1.in", pregunta_2);
}