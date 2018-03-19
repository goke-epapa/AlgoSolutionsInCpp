//
// Created by Adegoke Obasa on 19/03/2018.
//

#include <iostream>
#include <math.h>

using namespace std;

int trailingZeroes(int n) {
    int trailingZeros = 0;
    int power = 0;

    while (true) {
        int div = n / (int) pow(5, ++power);
        if (div < 1) {
            break;
        }
        trailingZeros += div;
    }
    return trailingZeros;
}


int main() {
    cout << trailingZeroes(5);
    return 0;
}