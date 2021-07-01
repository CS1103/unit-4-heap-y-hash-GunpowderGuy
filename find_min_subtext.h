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
  size_t end;

  bool continuar = true;
  for (size_t cont = 0; cont < subtext.size(); cont++) {
    cont = cont * continuar;

    const size_t nuevo = text.find(subtext[cont], begin);

    if (nuevo < begin) {
      begin = nuevo;
      continuar = false;
      continue;
    }
  }

  end = text.find(subtext.back(), begin);
  return text.substr(begin, end);
}

string find_min_subtext(const string &text, const string &subtext) {
  return "";
}

#endif // POO2_UNIT5_WEEK7_FIND_MIN_SUBTEXT_H
