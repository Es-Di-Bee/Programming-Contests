#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int tc = 0;
    scanf("%d", &tc);
    while (tc--) {
        ll low = 0, high = 0;
        scanf("%lld %lld", &low, &high);
        ll num = 0;
        int maxDiv = 0;
        ll temp = low;
        while (low <= high) {
            int divisors = 0;
            bool flag = false;
            for (int i = 1; i <= sqrt(low); ++i) {
                if (low % i == 0) {
                    if (i == sqrt(low)) flag = true;
                    ++divisors;
                }
            }
            divisors *= 2;
            if (flag) {
                --divisors;
            }
            if (divisors > maxDiv) {
                maxDiv = divisors;
                num = low;
            }
            ++low;
        }
        printf("Between %lld and %lld, %lld has a maximum of %d divisors.\n", temp, high, num, maxDiv);
    }
}
