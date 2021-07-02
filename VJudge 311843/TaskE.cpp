#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    getline(cin, str);
    stack<char>s;
    for (int i = 0; i < str.size(); ++i) {
        if (s.empty()) {
            s.push(str[i]);
        } else {
            if (str[i] == s.top()) {
                s.pop();
            } else {
                s.push(str[i]);
            }
        }
    }
    if (s.empty()) {
        printf("Yes\n");
    } else {
    printf("No\n");
    }

}
