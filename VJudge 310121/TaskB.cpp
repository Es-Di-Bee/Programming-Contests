#include<bits/stdc++.h>
using namespace std;
long long int x;

int Answer() {
     int range = (int)(sqrt(fabs((double)x))+1);
        for (int i = 2; i <= range; ++i) {
            int count = 0;
            int temp = x;
            while (temp % i == 0) {
                temp = temp / i;
                ++count;
            }
            if(abs(temp) == 1) {
                if((x > 0) || (x < 0 && count&1 != 0)) {
                    return count;
                }
            }

        }
        return 1;
}


int main() {
    while (scanf("%lld", &x) && (x)) {
        printf("%d\n", Answer());
    }
}
