//
// Created by 刘健 on 2023/3/18.
//

#ifndef IMOOCCPP_OPERATOR_PRIORITY_H
#define IMOOCCPP_OPERATOR_PRIORITY_H
#pragma once
#include <iostream>
using namespace std;
namespace operator_priority {

class Solution {
public:
    static void test() {
        std::cout << "Hello, World!" << std::endl;
        int a, b, c;
        b = a = 2, a * 2;
        std::cout << a << ", " << b << endl;
        b = (a = 2, a * 2);
        cout << a << ", " << b << endl;
        b = 1 > 0 ? a = 2, a = 3 : 10;
        cout << a << ", " << b << endl;

        a = b = c = 10;
        std::cout << a << ", " << b << ", " << c << ", " <<std::endl;
    }
};

}
#endif //IMOOCCPP_OPERATOR_PRIORITY_H
