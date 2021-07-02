#include<bits/stdc++.h>
#include <locale>
using namespace std;
int main() {
    int tc = 0;
    scanf("%d", &tc);

    for (int t = 1; t <= tc; ++t) {
        double avg = 0.0;
        double sum = 0;
        for (int j = 1; j <= 12; ++j) {
            double x = 0.0;
            scanf("%lf", &x);
            sum += x;
        }
        sum = sum / 12.0;
        if(sum >= 1000)
        {
            double y = (int)(sum/1000.00);
            double dif = sum - (1000*y);
            printf("%d $%.0lf,%.2lf\n",t, y, dif);
        }
        else
        {
            printf("%d $%.2lf\n",t, sum);
        }
    }
}
