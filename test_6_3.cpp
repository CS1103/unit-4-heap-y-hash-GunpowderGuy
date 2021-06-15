//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "global.h"
#include "remove_duplicates.h"
#include <vector>
using namespace std;

static void pregunta_6() {
#ifdef ENABLE_TEST
    vector<double> source {1.7, 2.5, 3, 4, 2.5, 0.5, 1.7, 1.4, 0.5, 3, 3};
    auto result = remove_duplicates(source);
    for (const auto& item: result)
        cout << item << " ";
    cout << endl;
#endif
}

TEST_CASE("Pregunta #6_3") {
    execute_test("test_6_3.in", pregunta_6);
}