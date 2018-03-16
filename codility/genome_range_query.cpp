//
// Created by Adegoke Obasa on 09/03/2018.
//

#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(string &S, vector<int> &P, vector<int> &Q) {
    int prefixSum[S.length()][4];

    for (int i = 0; i < 4; i++) {
        prefixSum[0][i] = 0;
    }

    for (int i = 1; i < S.length() + 1; i++) {
        for (int j = 0; j < 4; j++) {
            int nucleotideValue = 0;
            switch (S[i - 1]) {
                case 'A':
                    nucleotideValue = 0;
                    break;
                case 'C':
                    nucleotideValue = 1;
                    break;
                case 'G':
                    nucleotideValue = 2;
                    break;
                case 'T':
                    nucleotideValue = 3;
                    break;
            }
            prefixSum[i][j] += prefixSum[i - 1][j];
            if (nucleotideValue == j) {
                prefixSum[i][j]++;
            }
        }
    }

    vector<int> minimalImpactFactors;
    for (int i = 0; i < P.size(); i++) {
        int a = P[i];
        int b = Q[i];

        for (int j = 0; j < 4; j++) {
            if (prefixSum[b + 1][j] - prefixSum[a][j] > 0) {
                minimalImpactFactors[i] = j + 1;
                break;
            }
        }
    }
    return minimalImpactFactors;
}

