//
// Created by 刘健 on 2023/3/19.
//

#ifndef IMOOCCPP_POINTER_H
#define IMOOCCPP_POINTER_H
#include <iostream>
using namespace std;
void testNew(int** p) {
    *p = new int(10);
    return ;
}

void funcPointer(int no, string str) {
    cout << __func__ << endl;
    cout << "no:" << no << ", str:" << str << endl;
}

void funcPointer1(int no, string str) {
    cout << __func__ << endl;
    cout << "no:" << no << ", str:" << str << endl;
}

void testCallBack(void (*pf)(int, string), int no, string str) {
    cout << __func__ << endl;
    pf(no, str);
    return ;
}

int main() {
    int *p = 0;
    cout << "p=" << p << endl;
    testNew(&p);
    cout << "p=" << p << ", *p=" << *p << endl;
    delete p;

    // 空指针不能解引用
    p = nullptr;
    cout << "p=" << p << endl;

    // 函数指针
    void (*pfunc) (int, string) = funcPointer;
    pfunc(3, "345");

    // 回调函数
    testCallBack(pfunc, 4, "456");

    testCallBack(funcPointer1, 5, "567");
    return 0;
}
#endif //IMOOCCPP_POINTER_H
