#include <bits/stdc++.h>
using namespace std;

long long modfnc(long long x, long long y, long long n) {
    if (y == 0) {
        return 1;
    } else if (y%2 == 0) {
        long long temp = modfnc(x,y/2,n);
        return (temp*temp) % n;
    } else {
        return ( (x%n) * modfnc(x,y-1,n) ) % n;
    }
}

int main() {
    int tc;
    while (scanf("%d", &tc) > 0) {
        while (tc--) {
            int x, y, n;
            scanf("%d %d %d", &x, &y, &n);
            long long ans = modfnc(x,y,n);
            cout << ans << endl;
        }
    }
}
