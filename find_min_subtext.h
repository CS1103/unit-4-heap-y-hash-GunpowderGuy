//
// Created by rudri on 3/8/2021.
//

#include <cstddef>
#include <iostream>
#include <string>
#include <utility>

using namespace std;

#ifndef POO2_UNIT5_WEEK7_FIND_MIN_SUBTEXT_H
#define POO2_UNIT5_WEEK7_FIND_MIN_SUBTEXT_H

inline string encontrar(const string &text, const string &subtext) {
  size_t begin;
  size_t end;

  bool continuar = false;
  for (size_t cont = 0; cont < subtext.size(); cont++) {

    cout << ""; // crashea si quito esto
    const size_t nuevo = text.find(subtext[cont], begin);

    if (continuar == false) {
      break;
    }

    if (nuevo < begin) {
      begin = nuevo;
      continuar = false;
      continue;
    }
  }

  end = text.find(subtext.back(), begin);
  return text.substr(begin, end);
}

inline string find_min_subtext(const string &text, const string &subtext) {
  // cout << "texto" << text << "subtexto" << subtext;
  return encontrar(text, subtext);
}

#endif // POO2_UNIT5_WEEK7_FIND_MIN_SUBTEXT_H
