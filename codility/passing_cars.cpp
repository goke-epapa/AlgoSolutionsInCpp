//
// Created by Adegoke Obasa on 07/03/2018.
//

#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> &A) {
    int result = 0;
    int carFactor = 0;

    for (int a : A) {
        if (a == 0) {
            carFactor++;
        } else {
            result += carFactor;
        }
        if (result > 1000000000) {
            return -1;
        }
    }

    return result;
}

int main() {
    vector<int> A;
    A.push_back(0);
    A.push_back(1);
    A.push_back(0);
    A.push_back(1);
    A.push_back(1);
    cout << solution(A) << endl;
}