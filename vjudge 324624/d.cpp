#include <bits/stdc++.h>
using namespace std;
int main() {
    int tc;
    scanf("%d", &tc);
    while(tc--) {
        int n, c;
        scanf("%d %d", &n, &c);
        int a[n] = {0};
        for (int i = 0; i < n; ++i) {
            scanf("%d", &a[i]);
        }
        sort(a, a+n);
        int right = a[n-1]-a[0]+1;
        int left = a[0];
        int mid;
        while(right-left > 1) {
            mid = ( (right + left) / 2) + 1;
            int cows = 1;
            int firstpos = a[0];
            for (int q = 1; q < n; ++q) {
                if (a[q] - firstpos >= mid) {
                    firstpos = a[q];
                    ++cows;
                    if (cows == c) {
                        left = mid;
                        break;
                    }
                }
                if (q == n-1) {
                    right = mid;
                }
            }
        }
        cout << mid << endl;
    }
}
