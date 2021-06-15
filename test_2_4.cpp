//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "global.h"
#include "top_distance.h"
using namespace std;

static void pregunta_2() {
#ifdef ENABLE_TEST
    vector<point<int>> values = {
            {10, 10}, {1, 20}, {10, 2}, {1, 4}, {1, 5},
            {2, 1}, {2, 2}, {2, 2}, {2, 4}, {2, 5},
            {3, 1}, {3, 2}, {3, 22}, {3, 42}, {3, 5} };
    auto result = top_distance<21, greater<int>>(values, point<int>{10, 10});
    for (const auto& item: result)
        cout << item << endl;
#endif
}

TEST_CASE("Pregunta #2_4") {
    execute_test("test_2_4.in", pregunta_2);
}