#include<bits/stdc++.h>
#define readfromfile() freopen("input.txt", "r", stdin);
#define writetofile()  freopen("output.txt", "w", stdout);
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define arrayinput() for (int i = 0; i < n; ++i) cin >> a[i];
#define debug(val) cout << "The value is " << val << endl;
#define ll long long 
using namespace std;

int a[100];
int tc = 0, n = 0;

int main() {
    fastio();
	// #ifndef ONLINE_JUDGE
    //     readfromfile();
    // #endif

    ll a,b,c;
    cin >> a >> b >> c;

    cout << __gcd(a, __gcd(b,c)) << "\n";

    
}