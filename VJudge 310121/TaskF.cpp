#include <bits/stdc++.h>
using namespace std;
int main() {
    int tc, j = 1;
    scanf("%d", &tc);
    while (j <= tc) {
        long long int x, y, c, b=1;
        scanf("%lld %lld %lld", &x, &y, &c);
        long long int a = (x*y) / (__gcd(x,y));
        vector<int>v1(1000000,0);

        if (a == 1) {
            b = c;
            printf("Case %d: %lld\n", j, b);
        }
        else if (c % a == 0) {
            int count1 = 0;
            for(int i = 2; i <= a; i++) {
                int count = 0;
                while(a % i == 0) {
                    ++count;
                    a = a/i;
                }
                v1[count1] = count;
                ++count1;
            }
            int count2 = 0;
            for(int i = 2; i <= c; i++) {
                int count = 0;
                while(c % i == 0) {
                    ++count;
                    c = c/i;
                }

                if(count > v1[count2]) {
                    int product = 1;
                    for (int q = 1; q <= count; ++q) {\
                        product *= i;
                    }
                    b = b * product;
                }
                count2++;
            }
            printf("Case %d: %lld\n", j, b);
        } else {
            printf("Case %d: ", j);
            printf("impossible\n");
        }
        ++j;
    }
}
