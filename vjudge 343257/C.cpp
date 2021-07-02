#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    getline(cin, str);
    long long ans = 0;

    for (int i = 0; i < str.size(); ++i) {
        if (str[i] == '-') {
            continue;
        }
        ans += (str[i] - 48);
    }

    printf("%lld\n", ans);
}
