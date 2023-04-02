//
// Created by 刘健 on 2023/3/26.
//

#ifndef IMOOCCPP_CLASS_H
#define IMOOCCPP_CLASS_H
#include <string>
#include <iostream>
using namespace std;
class Solution {
public:
    Solution() {
        cout << "()" << __func__ << endl;
    }
    Solution(int age, string name): age_(age), name_(name) {
        cout << __func__ << endl;
    }
    Solution(Solution& sol) {
        this->age_ = sol.age_;
        this->name_ = sol.name_;
        cout << "&" << __func__ << endl;
    }
    ~Solution() {
        cout << __func__ << (void*) this << endl;
    }
    Solution& operator=(const Solution& sol);
    void show();
private:
    int age_;
    string name_;
};

void Solution::show() {
    cout << age_ << "," << name_ << "\t" << (void*) this << endl;
}

Solution& Solution::operator=(const Solution& sol) {
    this->age_ = sol.age_;
    this->name_ = sol.name_;
    cout << __func__ << endl;
    return *this;
}

Solution func(Solution a) {
    return a;
}

int main() {
    Solution sol{10, "tony"};
    sol.show();
    Solution sol1;
    sol1.show();
    Solution sol2 = sol;
    sol2.show();
    sol1 = sol;
    sol1.show();
    return 0;
}

#endif //IMOOCCPP_CLASS_H
