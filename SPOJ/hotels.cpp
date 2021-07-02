#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n] = {0};
    for (int i = 0 ; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    long long currentSum = 0, maxSum = 0;
    for (int l = 0, r = 0; r < n; ++r) {
        currentSum += a[r];
        while (currentSum > m) {
            currentSum -= a[l++];
        }
        maxSum = max(maxSum, currentSum);
    }
    printf("%lld\n", maxSum);
}
