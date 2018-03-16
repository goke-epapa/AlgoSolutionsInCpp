//
// Created by Adegoke Obasa on 16/03/2018.
//
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int solution(vector<int> &A) {
    sort(A.begin(), A.end());
    for(int i = 0; i < (int) A.size() - 2; i++) {
        long P = A[i];
        long Q = A[i + 1];
        long R = A[i + 2];

        if ((P + Q > R) && (Q + R > P) && (R + P > Q)) {
            return 1;
        }
    }
    return 0;
}