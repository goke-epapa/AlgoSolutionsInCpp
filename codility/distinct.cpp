//
// Created by Adegoke Obasa on 16/03/2018.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> &A) {
    sort(A.begin(), A.end());
    if(A.size() < 1) {
        return 0;
    }
    int distinct = 1;
    for(int i = 1; i < (int) A.size(); i++) {
        if(A[i] != A[i - 1]) {
            distinct++;
        }
    }
    return distinct;
}