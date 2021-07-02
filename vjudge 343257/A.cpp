#include <bits/stdc++.h>
using namespace std;
int main() {
    int j = 0;
    long long a[1005] = {0};
    int x = 0;
    while (cin >> x) {
        a[j] = x;
        ++j;
    }

    long long ans = __gcd(a[0], a[1]);
    for (int i = 2; a[i] != 0; ++i) {
        ans = __gcd(ans,a[i]);
    }
    printf("%lld\n", ans);
}
