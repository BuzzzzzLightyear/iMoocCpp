//
// Created by 刘健 on 2023/3/26.
//

#ifndef IMOOCCPP_QUICK_SORT_CPP
#define IMOOCCPP_QUICK_SORT_CPP
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    static void quickSort(vector<int>& vec, int l, int r) {
        if (l >= r) return ;
        int i = l, j = r;
        int pivot = vec[l];
        while (i < j) {
            while (i < j && vec[j] >= pivot) {
                j--;
            }
            while (i < j && vec[i] <= pivot) {
                i++;
            }
            if (i < j) {
                swap(vec[i], vec[j]);
            }
        }
        swap(vec[i], vec[l]);
        quickSort(vec, l, i-1);
        quickSort(vec, i+1, r);
    }

    static void quickSort(vector<int>& vec) {
        quickSort(vec, 0, vec.size()-1);
    }

    static bool check() {
        vector<int> vec(200, 0);
        for (int i = 0; i < 200; ++i) {
            vec[i] = rand() % 1000;
        }
//        cout << vec[199] << endl;
        Solution::quickSort(vec);
        for (int i = 0; i < 199; ++i) {
            if (vec[i] > vec[i+1]) return false;
        }
        return true;
    }
};

int main() {
    for (int i = 0; i < 2000; ++i) {
        if (!Solution::check()) {
            cout << "false" << endl;
        }
    }
    return 0;
}

#endif //IMOOCCPP_QUICK_SORT_CPP
