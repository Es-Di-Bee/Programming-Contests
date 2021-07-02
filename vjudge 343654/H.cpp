#include<bits/stdc++.h>
using namespace std;
int main() {
    int n = 0;

    while(scanf("%d", &n) && n != 0) {
        int temp = n;
        int ans = 0;
        int c = 2;
        bool flag = false;
        while (1) {
            bool flag2 = false;
            while(n % c == 0) {
                flag2 = true;
                n = n / c;
                if (n == 1) {
                    flag = true;
                    break;
                }
            }
            if(flag2) ++ans;
            ++c;
            if(flag) {
                break;
            }
        }
        printf("%d : %d\n", temp, ans);
    }
}
