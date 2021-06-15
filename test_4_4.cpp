//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "global.h"
#include "crisscross_pairs.h"
#include <vector>
#include <utility>
using namespace std;

static void pregunta_4() {
#ifdef ENABLE_TEST
    using sorted_pair = std::pair<int, int>;
    vector<sorted_pair> vec {};
    auto result = crisscross_pairs(vec);
    for (const auto& item: result)
        cout << item.first << " " << item.second << endl;
#endif
}

TEST_CASE("Pregunta #4_4") {
    execute_test("test_4_4.in", pregunta_4);
}