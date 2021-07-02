#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    scanf("%d", &n);
    int a[n] = {0};
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    int gcd = a[0];
    for (int i = 1; i < n; ++i) {
        gcd = __gcd(gcd, a[i]);
    }
    printf("%d\n", gcd*n);
}
