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

int main() {
    int *p = 0;
    cout << "p=" << p << endl;
    testNew(&p);
    cout << "p=" << p << ", *p=" << *p << endl;
    delete p;
    return 0;
}
#endif //IMOOCCPP_POINTER_H
