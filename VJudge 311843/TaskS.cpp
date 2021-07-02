#include<bits/stdc++.h>
using namespace std;
int main() {
    int tc;
    scanf("%d", &tc);
    for (int i = 1; i <= tc; ++i) {
    double ox, oy, ax, ay, bx, by;
    scanf("%lf %lf %lf %lf %lf %lf", &ox, &oy, &ax, &ay, &bx, &by);
    double O = sqrt(((bx-ax)*(bx-ax)) + ((by-ay)*(by-ay)));
    double A = sqrt(((ox-bx)*(ox-bx)) + ((oy-by)*(oy-by)));
    double B = sqrt(((ox-ax)*(ox-ax)) + ((oy-ay)*(oy-ay)));
    double angle = acos(((A*A)+(B*B)-(O*O)) / (2*A*B));
    double result = A * angle;
    printf("Case %i: %lf\n", i, result);
    }
}
