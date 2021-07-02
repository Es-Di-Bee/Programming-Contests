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

int sum (int x) {
    int sum = 0;
    while (x > 0) {
        sum += x%10;
        x /= 10;
    }
    return sum;
}

int main() {
    fastio();
	// #ifndef ONLINE_JUDGE
    //     readfromfile();
    // #endif

    int l, d, x;
    cin >> l >> d >> x;

    for (int i = l; i <= d; ++i) {
        int ans = sum(i);
        if (ans == x) {
            cout << i << "\n";
            break;
        }
    }

    for (int i = d; i >= l; --i) {
        int ans = sum(i);
        if (ans == x) {
            cout << i << "\n";
            break;
        }
    }
    
}