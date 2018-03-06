//
// Created by Adegoke Obasa on 06/03/2018.
//

#include <iostream>

using namespace std;

int solution(int A, int B, int K) {
    int aDiv = A / K;
    int bDiv = B / K;
    int result = bDiv - aDiv;
    if (A % K == 0) {
        result++;
    }
    return result;
}

int main() {
    cout << solution(3, 11, 2) << endl;
}