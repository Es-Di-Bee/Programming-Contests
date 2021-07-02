#include<bits/stdc++.h>
using namespace std;
int main() {
    int tc = 0;
    scanf("%d", &tc);
    for (int t = 1; t <= tc; ++t) {
        int initialC = 0, increase = 0;
        scanf("%d %d", &initialC, &increase);
        float f = ((9.0/5)*initialC) + 32;
        f += increase;
        float ans = (5/9.0) * (f-32);
        printf("Case %d: %.2f\n", t, ans);
    }
}
