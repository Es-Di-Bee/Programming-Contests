#include <bits/stdc++.h>
using namespace std;
int main() {
    int tc;
    scanf("%d\n", &tc);
    while (tc--) {
        stack<char>s;
        string str;
        getline(cin, str);bool flag = true;
        for (int i = 0; i < str.size(); ++i) {
            if (str[i] == '(') {
                    s.push(str[i]);
            } else if (str[i] == '[') {
                s.push(str[i]);
            } else if (str[i] == ')') {
                if (!s.empty() && s.top() == '(') {
                    s.pop();
                } else {
                    printf("No\n");
                    flag = false;
                    break;
                }
            } else if(str[i] == ']') {
                if (!s.empty() && s.top() == '[') {
                    s.pop();
                } else {
                    printf("No\n");
                    flag = false;
                    break;
                }
            }
        }
        if (flag) {
            if (s.empty()) {
                printf("Yes\n");
            } else {
                printf("No\n");
            }
        }
    }
}


