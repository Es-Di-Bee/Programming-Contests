#include <bits/stdc++.h>
using namespace std;
int main() {
    int tc;
    scanf("%d", &tc);
    long long int a[21] = {1,1,2,6,24,120,720,5040,40320,362880,3628800,39916800,479001600,6227020800,87178291200,1307674368000,20922789888000,355687428096000,6402373705728000,121645100408832000,2432902008176640000};
    for (int t = 1; t <= tc; ++t) {
        long long int n;
        scanf("%lld", &n);
        int limit = 0;
        vector<int>v;
        bool flag = false;
        for (int i = 0; i < 20; ++i) {
            if (n >= a[i] && n < a[i+1]) {
                limit = i;
                break;
            }
        }
        v.push_back(limit);
        long long int total = a[limit];
        if (total == n) {
            printf("Case %d: %d!\n", t, limit);
            continue;
        }
        for (int i = limit-1; i >= 0; --i) {
            if (total + a[i] > n) {
                continue;
            } else if (total + a[i] < n) {
                v.push_back(i);
                total += a[i];
            } else if (total == n) {
                v.push_back(i);
                flag = true;
                break;
            }
            else {
                v.push_back(i);
                flag = true;
                break;
            }
        }
        if (flag) {
            printf("Case %d: ", t);
            for (int i = v.size()-1; i >= 0; --i) {
                printf("%d!", v[i]);
                if (i != 0) {
                    printf("+");
                }
            }
        } else {
            printf("Case %d: impossible", t);
        }
        printf("\n");
    }
}
