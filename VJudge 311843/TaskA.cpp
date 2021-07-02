#include <bits/stdc++.h>
using namespace std;
int main() {
    int tc;
    scanf("%d", &tc);
    for(int i = 1; i <= tc; ++i) {
        int students;
        scanf("%d", &students);
        int greatest = 0;
        int speed = 0;
        while (students--) {
            scanf("%d", &speed);
            if (speed > greatest) {
                greatest = speed;
            }
        }
        printf("Case %d: %d\n", i, greatest);
    }
}

