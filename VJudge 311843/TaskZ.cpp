#include <bits/stdc++.h>
using namespace std;
int main() {
    int tc;
    scanf("%d", &tc);
    for (int t = 1; t <= tc; ++t) {
        double a, b, c, d;
        scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
        double sum = a + c;
        double base = fabs(a-c);
        double p = (b+base+d) / 2;
        double area = sqrt(p*(p-b)*(p-base)*(p-d));
        double height = (2 * area) / base;
        double ans = .5 * sum * height;
        printf("Case %d: %.8lf\n", t, ans);
    }
}
