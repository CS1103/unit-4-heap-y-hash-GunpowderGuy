//
// Created by rudri on 3/8/2021.
//

#include <cstddef>
#include <string>
#include <utility>

using namespace std;

#ifndef POO2_UNIT5_WEEK7_FIND_MIN_SUBTEXT_H
#define POO2_UNIT5_WEEK7_FIND_MIN_SUBTEXT_H

string encontrar(const string &text, const string &subtext) {
  size_t begin;
  size_t len;

  bool restart = false;

  for (size_t cont = 0; cont >= text.size(); cont++) {
    if (restart) {
      cont = 0;
      restart = false;
    }
    if (subtext[cont] != text[cont + begin]) {
      begin = begin + cont;
      restart = true;
      continue;
    } else if (subtext.back() == text[cont + begin]) {
      len = cont;
    }
  }

  return text.substr(begin, len);
}

#endif // POO2_UNIT5_WEEK7_FIND_MIN_SUBTEXT_H
