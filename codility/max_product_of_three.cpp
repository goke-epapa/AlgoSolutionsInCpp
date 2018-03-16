//
// Created by Adegoke Obasa on 16/03/2018.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int solution(vector<int> &A) {
    sort(A.begin(), A.end());
    int len = A.size();
    int productWithTwoNegatives = A[0] * A[1] * A[len - 1];

    int productWithPositivesOnly = A[len - 3] * A[len - 2] * A[len - 1];

    if (productWithTwoNegatives > productWithPositivesOnly) {
        return productWithTwoNegatives;
    }
    return productWithPositivesOnly;
}