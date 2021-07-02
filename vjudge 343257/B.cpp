#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a, b;
    scanf("%lld %lld", &a, &b);
    long long ans = (a*b) / __gcd(a,b);
    printf("%lld\n", ans);
}
