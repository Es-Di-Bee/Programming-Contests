#include <bits/stdc++.h>
using namespace std;
int main() {
    int tc;
    scanf("%d", &tc);
    while(tc--) {
        int rooms;
        cin >> rooms;
        string str;
        cin >> str;
        int a[3] = {0};
        int r = 0, g = 0, b = 0;
        for (int i = 0; i < rooms; ++i) {
            if(str[i] == 'R') {
                r++;
            } else if (str[i] == 'G') {
                g++;
            } else if (str[i] == 'B'){
                b++;
            }
        }
        a[0] = r, a[1] = g, a[2] = b;

        sort(a, a+3);
        int ans = rooms - a[2];
        printf("%d\n", ans);
    }
}
