#include<bits/stdc++.h>
using namespace std;


int main() {
    int tc = 0;
    scanf("%d", &tc);
    while (tc--) {
        int sum = 0;
        for (int i = 1; i <= 4; ++i) {
            int num = 0;
            cin >> num;
            for (int j = 0; j < 4; ++j) {
                int digit = num % 10;
                num /= 10;
                if (j%2 == 0) {
                    sum += digit;
                } else {
                    int dig = digit * 2;
                    while (dig > 0){
                        sum += dig % 10;
                        dig /= 10;
                    }
                }
            }
        }
        if (sum % 10 == 0) printf("Valid\n");
        else printf("Invalid\n");
    }
}
