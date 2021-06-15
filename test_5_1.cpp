//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "global.h"
#include "p5.h"
using namespace std;

TEST_CASE("Pregunta #5_1") {
    execute_test("test_5_1.in", pregunta_5);
}