#include <bits/stdc++.h>
using namespace std;
int main() {
     int n,k;
     scanf("%d %d", &n, &k);
     long long int count = 0;
     while (n--) {
        long long int t;
        scanf("%lld", &t);
        if (t % k == 0) {
            ++count;
        }
     }
     printf("%lld\n", count);
}
