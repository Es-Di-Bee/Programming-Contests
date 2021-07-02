#include<bits/stdc++.h>
using namespace std;
int main() {
    int tc;
    scanf("%d\n", &tc);
    while (tc--) {
        string str;
        getline(cin, str);
        vector<int>v;
        istringstream buf(str);
        for (int number; buf >> number;) {
            v.push_back(number);
        }
        int ans = 0;
        for (int i = 0; i < v.size()-1; ++i) {
            for (int j = i+1; j < v.size(); ++j) {
                int gcd = __gcd(v[i], v[j]);
                if (gcd > ans) {
                    ans = gcd;
                }
            }
        }
        printf("%d\n", ans);
    }
}
