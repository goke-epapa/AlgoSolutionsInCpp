//
// Created by Adegoke Obasa on 23/03/2018.
//

#include <vector>
#include <stack>

using namespace std;

int solution(vector<int> &H) {
    stack<int> stack;
    int count = 0;

    for (int i = 0; (unsigned) i < H.size(); i++) {
        int h = H[i];

        // Pop until last element in stack greater or equals current element
        while (!stack.empty() && h < stack.top()) {
            stack.pop();
        }
        // Stack is empty add height and increment count
        if (stack.empty()) {
            stack.push(h);
            count++;
        }
            // From Low to High
        else if (h > stack.top()) {
            stack.push(h);
            count++;
        }
    }
    return count;
}