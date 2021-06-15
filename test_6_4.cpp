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
    list<int> source {1, 2, 3, 4, 5, 5, 7, 4, 5, 3, 3};
    auto result = remove_duplicates<int, list, vector>(source);
    for (const auto& item: result)
        cout << item << " ";
    cout << endl;
#endif
}

TEST_CASE("Pregunta #6_4") {
    execute_test("test_6_4.in", pregunta_6);
}