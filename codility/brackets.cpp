//
// Created by Adegoke Obasa on 20/03/2018.
//

#include <iostream>
#include <stack>

using namespace std;

int solution(string &S) {
    stack<char> characterStack;

    unsigned long len = S.size();
    if (len == 0) return 1;

    for (int i = 0; (unsigned) i < len; i++) {
        char c = S[i];
        if (c == '(' || c == '{' || c == '[') {
            characterStack.push(c);
        } else {
            if (characterStack.empty()) return 0;
            if (c == ')' && characterStack.top() != '(') return 0;
            if (c == '}' && characterStack.top() != '{') return 0;
            if (c == ']' && characterStack.top() != '[') return 0;
            characterStack.pop();
        }
    }
    return characterStack.empty() ? 1 : 0;
}

int main() {
    cout << solution((string &) "{{{}}}");
    return 0;
}
