#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    cin >> str;
    int mass = 0;
    stack<int>s;
    for (int i = 0; i < str.size(); ++i) {
        if (str[i] == 'H') {
           s.push(1);
        } else if(str[i] == 'C') {
            s.push(12);
        } else if (str[i] == 'O') {
            s.push(16);
        } else if (str[i] == '(') {
            s.push(-1);
        } else if (isdigit(str[i])) {
            int temp = s.top() * (str[i] - '0');
            s.pop();
            s.push(temp);
        } else if (str[i] == ')') {
            int temp = 0;
            while (!s.empty() && s.top() != -1) {
                temp += s.top();
                s.pop();
            }
            s.pop();
            s.push(temp);
        }
    }
    while (!s.empty()) {
        mass += s.top();
        s.pop();
    }
    printf("%d\n", mass);
}

