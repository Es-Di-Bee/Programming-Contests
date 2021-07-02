#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int main() {
    double m, hour, angle, hAngle, mAngle;
    char c;
    while(1) {
        cin >> hour >> c >> m;
        if (hour == 0 && m == 0) break;

        hAngle = hour*30+(m/60)*30;

        mAngle = m*6;

        angle = (hAngle - mAngle);

        if (angle < 0) {
            angle*=-1;
        }
        if (angle > 180) {
            angle = 360 - angle;
        }

        printf("%.3f\n",angle);

    }
    return 0;
}
