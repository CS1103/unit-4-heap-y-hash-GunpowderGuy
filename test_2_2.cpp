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
    vector< point<int> > values = {
            {1, 1}, {1, 2}, {1, 2}, {1, 4}, {1, 5},
            {2, 1}, {2, 2}, {2, 2}, {2, 4}, {2, 5} };
    auto result = top_distance<3, less<int>>(values, point<int>{30, 40});
    for (const auto& item: result)
        cout << item << endl;
#endif
}

TEST_CASE("Pregunta #2_2") {
    execute_test("test_2_2.in", pregunta_2);
}
