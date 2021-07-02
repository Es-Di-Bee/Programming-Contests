#include<bits/stdc++.h>
using namespace std;

int emod(int a, int b , int c) {
    if (b == 0) {
        return 1;
    } else if (b%2 == 0) {
        int d = emod(a, b/2, c);
        return (d*d)%c;
    } else {
        int d = emod(a, b-1, c);
        return ((a%c)*d) % c;
    }
}

int main() {
    int a = 0, b = 0, c = 0;
    scanf("%d %d %d", &a, &b,&c);
    int ans = emod(a,b,c);
    printf("%d\n", ans);

}

