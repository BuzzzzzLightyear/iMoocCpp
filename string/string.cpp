//
// Created by 刘健 on 2023/3/26.
//

#ifndef IMOOCCPP_STRING_H
#define IMOOCCPP_STRING_H
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <chrono>
using namespace std;

char* mystrcpy1(char* dest, const char* src) {
    int ii{0}, jj{0};
    while(src[ii]) {
        dest[ii++] = src[jj++];
    }
    dest[ii] = 0;
    return dest;
}

char* mystrcpy2(char* dest, const char* src) {
    char* pdest = dest;
    char* psrc = (char*) src;
    while(*psrc) {
        *pdest++ = *psrc++;
    }
    *pdest = 0;
    return dest;
}

char* mystrcpy3(char* dest, const char* src) {
    memcpy(dest, src, strlen(src) + 1);
    return dest;
}

int main() {
    std::chrono::steady_clock::time_point start_time, end_time;
    std::chrono::nanoseconds dt;
/*
    char str1[51];
    start_time = chrono::steady_clock::now();
    memset(str1, 0, sizeof(str1));
    for (int i = 0; i < 10000000; ++i) {
        mystrcpy1(str1, "我是一只傻傻鸟，不是笨笨鸟，你才是笨笨鸟，1");
    }
    cout << str1 << endl;
    end_time = chrono::steady_clock::now();
    dt = end_time - start_time;
    cout << "耗时：" << (double)dt.count() / 1000000000 << "秒" << endl;

    start_time = chrono::steady_clock::now();
    memset(str1, 0, sizeof(str1));
    for (int i = 0; i < 10000000; ++i) {
        mystrcpy2(str1, "我是一只傻傻鸟，不是笨笨鸟，你才是笨笨鸟，2");
    }
    cout << str1 << endl;
    end_time = chrono::steady_clock::now();
    dt = end_time - start_time;
    cout << "耗时：" << (double)dt.count() / 1000000000 << "秒" << endl;

    start_time = chrono::steady_clock::now();
    memset(str1, 0, sizeof(str1));
    for (int i = 0; i < 10000000; ++i) {
        mystrcpy3(str1, "我是一只傻傻鸟，不是笨笨鸟，你才是笨笨鸟，3");
    }
    cout << str1 << endl;
    end_time = chrono::steady_clock::now();
    dt = end_time - start_time;
    cout << "耗时：" << (double)dt.count() / 1000000000 << "秒" << endl;
*/

    string str{"1234567"};
    char c = '5';
    start_time = chrono::steady_clock::now();
    for (int i = 0; i < 10000000; ++i) {
        str.find("5");
    }
    end_time = chrono::steady_clock::now();
    dt = end_time - start_time;
    cout << "耗时：" << (double)(dt.count()) << endl;

    start_time = chrono::steady_clock::now();
    for (int i = 0; i < 10000000; ++i) {
        str.find('5');
    }
    end_time = chrono::steady_clock::now();
    dt = end_time - start_time;
    cout << "耗时：" << (double)(dt.count()) << endl;
    return 0;
}
#endif //IMOOCCPP_STRING_H
