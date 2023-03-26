//
// Created by 刘健 on 2023/3/19.
//

#ifndef IMOOCCPP_ARRAY_H
#define IMOOCCPP_ARRAY_H
#include <iostream>
#include <string.h>
using namespace std;
int main() {

//    { // 数组占用内存情况
//        int aInt[10];
//        for (auto it : aInt) cout << it << endl;
//        cout << "sizeof(aInt)=" << sizeof aInt << endl;
//        memset(aInt, 0, sizeof(aInt));
//        for (auto it : aInt) cout << it << endl;
//    }
//    { // 数字初始化
//        int aInt[4]{0, 1, 2, 3};
//        for (auto it : aInt) cout << it << endl;
//        int bInt[]{0, 1, 2, 3};
//        for (auto it : bInt) cout << it << endl;
//        int cInt[4]{0}; // 全部元素初始化为0
//        for (auto it : cInt) cout << it << endl;
//        int dInt[4]{};  // 全部元素初始化为0
//        for (auto it : dInt) cout << it << endl;
//    }
//    {
//        int aInt[4]{0, 1, 2, 3};
//        int bInt[4] {};
//        for (auto it : bInt) cout << it << endl;
//        memcpy(bInt, aInt, sizeof(bInt));
//        for (auto it : bInt) cout << it << endl;
//    }
    {
        char a;
        short b;
        int c;
        double d;
        cout << "a的地址是：" << (void*)&a << endl;
        cout << "a的地址+1是：" << (void*)(&a + 1) << endl;
        cout << "b的地址是：" << (void*)&b << endl;
        cout << "b的地址+1是：" << (void*)(&b + 1) << endl;

        int aa[5] = {1,2,3,4,5};
        for (auto it : aa) cout << it << endl;
        int *p = aa, i = 0;
        while (i++ < 5) cout << *p++ << endl;
    }
}
#endif //IMOOCCPP_ARRAY_H
