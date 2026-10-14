#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool isValid(string s) {
    vector<char> stack;

    for (char ch : s) {
        if (ch == '(' || ch == '[' || ch == '{') {
            stack.push_back(ch);
        } else if (!stack.empty() &&
                   ((ch == ')' && stack.back() == '(') ||
                    (ch == ']' && stack.back() == '[') ||
                    (ch == '}' && stack.back() == '{'))) {
            stack.pop_back();
        } else {
            return false;
        }
    }

    return stack.empty();
}

int main() {
    string s = "([])";
    cout << isValid(s) << endl;
    return 0;
}