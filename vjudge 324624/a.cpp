#include <bits/stdc++.h>
using namespace std;
int main() {
    int stones;
    scanf("%d", &stones);
    int a[stones] = {0};
    for (int i = 0; i < stones; ++i) {
        scanf("%d", &a[i]);
    }
    int sum1;
    int sum2;
    int rem;
    int minimum;
    long long int limit = pow(2, stones);
    vector<int>v;
    for (int i = 1; i < limit; ++i) {
        sum1 = 0;
        sum2 = 0;
        minimum = 100000000;
        for (int j = 0; j < stones; ++j) {
            if ( (i & (1 << j)) != 0) {
                sum1 += a[j];
            } else {
                sum2 += a[j];
            }
        }
        rem = abs(sum1-sum2);
        v.push_back(rem);

    }
    sort(v.begin(),v.end());
    printf("%d\n", v[0]);

}
