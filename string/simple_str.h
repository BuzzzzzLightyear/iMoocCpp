//
// Created by 刘健 on 2023/3/27.
//

#ifndef IMOOCCPP_SIMPLE_STR_H
#define IMOOCCPP_SIMPLE_STR_H
#include <iostream>
#include <cstring>
using namespace std;
class Simple_Str {
public:
    // 默认构造
    Simple_Str(char* data = nullptr);

    // 拷贝构造
    Simple_Str(Simple_Str& str);

    // 析构函数
    ~Simple_Str();

    // 重载赋值
    Simple_Str& operator=(const Simple_Str& str);

    // 重载==
    bool operator==(const Simple_Str& str);

    // 重载+
    Simple_Str operator+(const Simple_Str& str);

    // 求子串
    Simple_Str substr(int start, int len);

    // 求长度
    int length();

    // 重载输出
    friend ostream& operator<<(ostream& o, const Simple_Str& str);

private:
    char* m_data;
    int m_size;
};

#endif //IMOOCCPP_SIMPLE_STR_H
