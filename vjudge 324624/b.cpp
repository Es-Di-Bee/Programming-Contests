#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, r;
    while (scanf("%d %d", &n, &r)) {
        if (n == 0 && r== 0) {
            break;
        }
        int rtemp = r;
        int ntemp = n;
        long long x = 1, y = 1;
        if (r == 0 || r == n) {
            printf("%d things taken %d at a time is 1 exactly.\n", n, r);
        } else if (r == 1) {
            printf("%d things taken %d at a time is %d exactly.\n", n, r, n);
        } else {
            if ( (n-r) < r) {
                rtemp = n - r;
            }
            while (rtemp != 0) {
                x *= ntemp;
                y *= rtemp;
                long long gcd = __gcd(x,y);
                x /= gcd;
                y /= gcd;
                --ntemp;
                --rtemp;
            }
            printf("%d things taken %d at a time is %lld exactly.\n", n, r, x/y);
        }
    }
}
