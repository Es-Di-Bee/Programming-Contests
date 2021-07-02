#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    while (scanf("%d", &n) && n != 0) {
        string str;
        getline(cin, str);
        while (getline(cin, str) && str[0] != '0') {
            istringstream buf(str);
            int a[n] = {0};
            int index = 0;
            for(int digit; buf >> digit;) {
                a[index] = digit;
                index++;
            }
            stack<int>s;
            int k = 1;
            for (int i = 0; i < n; ++i) {
                if (!s.empty() && a[i] <= s.top()) {
                    if (a[i] == s.top()) {
                        s.pop();
                    } else {
                        printf("No\n");
                        break;
                    }
                } else {
                    while (k <= a[i]) {
                        s.push(k);
                        k++;
                    }
                    i--;
                }
            }
            if (s.empty()) {
                printf("Yes\n");
            }
        }
        cout << "\n";
    }
}
