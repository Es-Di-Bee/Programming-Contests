#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d\n", &n);
    int a[10] = {0};
    string str;
    getline(cin, str);
    for (int i = 0; i < str.size(); ++i) {
        if (str[i] == 'L') {
            for (int j = 0; j < 10; ++j) {
                if(a[j] == 0) {
                    a[j] = 1;
                    break;
                }
            }
        } else if (str[i] == 'R') {
           for (int j = 9; j >= 0; --j) {
                if(a[j] == 0) {
                    a[j] = 1;
                    break;
                }
            }
        } else if (isdigit(str[i])) {
            int digit = str[i] - '0';
            a[digit] = 0;

        }
    }
    for (int i = 0; i < 10; ++i) {
        printf("%d", a[i]);
    }
    printf("\n");
}
