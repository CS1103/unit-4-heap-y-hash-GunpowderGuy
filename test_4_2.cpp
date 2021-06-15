//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "global.h"
#include <vector>
#include <utility>
#include "crisscross_pairs.h"
using namespace std;

static void pregunta_4() {
#ifdef ENABLE_TEST
    using sorted_pair = std::pair<int, int>;
    vector<sorted_pair> vec {
        {1, 2}, {1, 1}, {2, 1}, {1, 4}, {3, 2}, {4,1}, {1, 2}, {4, 5}, {7, 1}, {7, 1}, {1, 7}};
    auto result = crisscross_pairs(vec);
    for (const auto& item: result)
        cout << item.first << " " << item.second << endl;
#endif
}

TEST_CASE("Pregunta #4_2") {
    execute_test("test_4_2.in", pregunta_4);
}