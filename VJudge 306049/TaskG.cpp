#include <bits/stdc++.h>

using namespace std;
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int a, b;
        scanf("%d %d", &a, &b);
        long int g = __gcd(a, b);
        long int l = (a *b) / g; // formula for finding lcm from gcd
        printf("%ld %ld\n", g, l);
    }
}
