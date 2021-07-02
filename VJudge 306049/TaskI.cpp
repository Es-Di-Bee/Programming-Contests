#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    scanf("%d", &t);
    for (int q = 1; q <= t; ++q) {
        int n, k;
        scanf ("%d %d", &n, &k);
        int count = 0;
        for (int i = 1; i <= n; ++i) {
            int num;
            scanf("%d", &num);
            if (num <= 0) {
                ++count;
            }
        }
        if (count < k) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }

    }
}

