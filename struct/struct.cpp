//
// Created by 刘健 on 2023/3/26.
//

#ifndef IMOOCCPP_STRUCT_H
#define IMOOCCPP_STRUCT_H
#include <iostream>
using namespace std;
//#pragma pack(8)

struct sNode {
    char name[21];
    int age;
    double weight;
    char sex;
    bool yz;
};

int main() {
    struct sNode node{0};
    cout << "sizeof(sNode): " << sizeof(sNode) << endl;
    cout << "sNode's addr: " << &node << endl;
    return 0;
}

#endif //IMOOCCPP_STRUCT_H
