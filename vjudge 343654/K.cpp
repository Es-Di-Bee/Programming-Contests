#include<bits/stdc++.h>
using namespace std;
int main() {
    int x1 = 0;
    int y1 = 0;
    int x2 = 0;
    int y2 = 0;
    int ans = 0;
    while(scanf("%d %d %d %d", &x1, &y1, &x2, &y2)) {
        if (x1 == 0) {
            break;
        }
        if (x1==x2 && y1==y2) {
            ans = 0;
        } else if (x1 == x2) {
            ans = 1;
        } else if (y1 == y2){
            ans = 1;
        } else if (abs(x1-x2) == abs(y1-y2)) {
            ans = 1;
        } else {
            ans = 2;
        }

        printf("%d\n", ans);
    }
}
