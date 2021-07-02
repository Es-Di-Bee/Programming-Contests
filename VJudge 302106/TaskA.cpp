#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; ++i) {
        int m;
        int n ;
        scanf("%d %d", &m, &n);
        int ans = m * n;
        if (m == 1 || n == 1) {
            ans = m * n;
        } else if (m == 2 || n == 2) {
            if (m == 2) {
                ans = n;
            } else {
                ans = m;
            }
            if (ans % 4 == 1) {
                ans += 1;
            } else if (ans % 4 == 2) {
                ans += 2;
            } else if (ans % 4 == 3) {
                ans += 1;
            }
        } else if (ans % 2  == 0 ) {
            ans  /= 2;
        } else {
            ans = (ans  /= 2) + 1;
        }
    printf("Case %d: %d\n", i, ans);
    }
}
