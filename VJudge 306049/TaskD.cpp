#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    scanf("%d", &t);
    while (t--) {
        int m, n;
        scanf("%d %d", &m, &n);
        int num;
        if (m == 1) {
            num = 2;
        } else {
            num = m;
        }
        while (num <= n) {
            bool flag = false;
            for (int i = 2; i <= sqrt(num); ++i) {
                if (num % i == 0) {
                    flag = true;
                    break;
                }
            }
            if(flag == false) {
                printf("%d\n", num);
            }
            ++num;
        }
        printf("\n");
    }
}
