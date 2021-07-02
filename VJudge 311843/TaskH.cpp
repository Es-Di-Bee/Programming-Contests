#include <bits/stdc++.h>
using namespace std;
int main() {
    int tc;
    scanf("%d", &tc);
    while (tc--) {
        int length;
        scanf("%d", &length);
        int a[length] = {0};
        for (int i = 0; i < length; ++i) {
            scanf("%d", &a[i]);
        }
        bool flag = false;
        int limit;
        for (int i = length-1; i > 0; --i) {
            if (a[i] > a[i-1]) {
                limit = i - 1;
                flag = true;
                break;
            }
        }
        if (flag == false) {
            printf("-1");
            printf("\n");
            continue;
        }
        int check = a[limit] + 1;
        bool flag2 = false;
        while (check < 10) {
            for (int j = limit+1; j < length; ++j)  {
                if (check == a[j]) {
                    flag2 = true;
                    int temp = a[limit];
                    a[limit] = a[j];
                    a[j] = temp;
                    break;
                }
            }
            if (flag2) {
                break;
            }
            ++check;
        }
        int j = limit+1;
        sort(a+j, a+length);
        for (int i = 0; i < length; ++i) {
                printf("%d", a[i]);
        }
        printf("\n");
    }
}
