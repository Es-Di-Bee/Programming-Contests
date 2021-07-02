 #include <bits/stdc++.h>
 using namespace std;

 double a[1000005];

 int main() {
    int tc, n, base;
    for (int q = 1; q <= 1000000; ++q) {
        a[q] = a[q-1] + log10(q);
    }

    scanf("%d", &tc);
    for (int t = 1; t <= tc; ++t) {
        scanf("%d %d", &n, &base);
        double temp = a[n];
        long long int digits = temp / log10(base)  + 1;
        printf("Case %d: %lld\n", t, digits);
    }
}
