#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    while (scanf("%d", &n) && n != 0) {
        int a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a+n);
        int count = 0;
        for (int i = n-1; i >= 2; --i) {
            int low = 0;
            int high = i - 1;
            while (low < high) {
                if (a[low] + a[high] < a[i]) {
                    count += high - low;
                    ++low;
                } else {
                    --high;
                }
            }
        }
        cout<<count<<'\n';
    }
}
