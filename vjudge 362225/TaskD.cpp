#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main() {
    fastIO();
    
    ll n = 0;
    while(cin >> n && n != 0) {
        ll G = 0;
        for(ll i = 1; i < n; i++) {
            for(ll j = i + 1; j <= n; j++) {
                G += __gcd(i,j);
            }
        }
        cout << G << endl;
    }

    return 0;
}