//
// Created by 刘健 on 2023/3/26.
//

#ifndef IMOOCCPP_CLASS_H
#define IMOOCCPP_CLASS_H
#include <string>
using namespace std;
class Solution {
public:
    Solution(int age, string name): age_(age), name_(name) {}
    ~Solution() {}
private:
    int age_;
    string name_;
};

int main() {
    Solution sol{10, "tony"};
}

#endif //IMOOCCPP_CLASS_H
