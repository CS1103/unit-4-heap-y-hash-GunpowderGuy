//
// Created by rudri on 3/8/2021.
//
#include<vector>
#include<algorithm>
using namespace std;

#ifndef POO2_UNIT5_WEEK7_HAVE_SAME_ELEMENTS_H
#define POO2_UNIT5_WEEK7_HAVE_SAME_ELEMENTS_H

template<typename T1, typename T2>
bool have_same_elements(const T1 &cont1, const T2 &cont2){
    using inner = typename T1::value_type;
    
    vector<inner> temp1 = vector(cont1.begin(),cont1.end());
    vector<inner> temp2 = vector(cont2.begin(),cont2.end());

    sort(temp1.begin(),temp1.end());
    sort(temp2.begin(),temp2.end());

    return temp1 == temp2;
}

#endif //POO2_UNIT5_WEEK7_HAVE_SAME_ELEMENTS_H
