#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a[10005] = {0};
    long long i = 0;
    long long num;
    while (cin >> num) {
        a[i++] = num;
        sort(a, a+i);
        if(i%2 == 0) {
            cout << (a[i/2-1]+a[i/2])/2 << endl;
        } else  {
            cout << a[i/2] << endl;
        }
    }
}
