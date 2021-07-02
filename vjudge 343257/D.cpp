#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    getline(cin, str);
    long long ans = 1;
    bool flag = false;
    for (int i = 0; i < str.size(); ++i) {
        if (str[i] == '-') {
            continue;
        }
        if ((str[i] - 48) % 2 == 0) {
            flag = true;
            ans = ans * (str[i] - 48);
        }
    }
    if (flag == false) ans = -1;
    printf("%lld\n", ans);
}
