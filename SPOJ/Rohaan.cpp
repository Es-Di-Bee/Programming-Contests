#include<bits/stdc++.h>
#define readfromfile() freopen("input.txt", "r", stdin);
#define writetofile()  freopen("output.txt", "w", stdout);
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define arrayinput() for (int i = 0; i < n; ++i) cin >> a[i];
#define debug(val) cout << "The value is " << val << endl;
#define ll long long 
using namespace std;

int a[55][55];
int tc = 0, n = 0;

int main() {
    fastio();
	#ifndef ONLINE_JUDGE
        readfromfile();
    #endif

    cin >> tc;

    for(int t = 1; t <= tc; ++t) {
        cin >> n;
        // arrayinput();

        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                cin >> a[i][j];
            }
        }
        // debug("OK");

        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                for (int k = 1; k <= n; ++k) {
                    a[j][k] = min(a[j][k], a[j][i] + a[i][k]);
                }
            }
        }

        int r, q, w;
        cin >> r;
        int ans = 0;
        while (r--) {
            cin >> q >> w;
            ans += a[q][w];
        }

        cout << "Case #" << t << ": " << ans << '\n';
    }
}