//
// Created by 刘健 on 2023/3/27.
//

#ifndef IMOOCCPP_REFERENCE_H
#define IMOOCCPP_REFERENCE_H
#include <iostream>
using namespace std;

int func(int& a) {
    cout << "addr" << (void*)&a << endl;
    return a;
}

int& func1(int& a) {
    cout << "addr" << (void*)&a << endl;
    return a;
}

int main() {
    int val = 10;
    cout << "val's addr:" << (void*)&val << endl;
    const int& a = func(val);
    cout << "a's addr" << (void*)&a << endl;
    int& b = func1(val);
    cout << "b's addr" << (void*)&b << endl;
    return 0;
}
#endif //IMOOCCPP_REFERENCE_H
