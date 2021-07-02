#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int>v(100000005,0);
    v[0] = 1; v[1] = 1;
    for (int i = 4; i < v.size(); i+=2) {
        v[i] = 1;
    }
    for (int i = 3; i*i <= v.size(); i+=2) {
        if (v[i] == 0) {
            for (int j = i*i; j < v.size(); j += i*2) {
                v[j] = 1;
            }
        }
    }
    vector<int>primes;
    for (int i = 0; i < v.size(); ++i) {
        if (v[i] == 0) {
            primes.push_back(i);
        }
    }
 
 
    int tc;
    scanf("%d", &tc);
    while (tc--) {
        int num;
        scanf("%d", &num);
        if(binary_search(primes.begin(), primes.end(), num)) {
            int pos = lower_bound(primes.begin(), primes.end(), num) - primes.begin();
            int sum = 0, row, column, previousSum;
            for (int i = 1; ++i;) {
                previousSum = sum;
                sum += i;
                if (sum >= pos) {
                    row = i;
                    column = pos -previousSum;
                    break;
                }
            }
            printf("%d %d\n", row, column);
        } else {
            printf("-1\n");
        }
    }
}
 