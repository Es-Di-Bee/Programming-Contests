#include<bits/stdc++.h>
#define readfromfile() freopen("input.txt", "r", stdin);
#define writetofile()  freopen("output.txt", "w", stdout);
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define arrayinput() for (ll i = 0; i < n; ++i) cin >> a[i];
#define debug(val) cout << "The value is " << val << endl;
#define ll long long 
using namespace std;

map <ll, ll> mp; 
set <ll> s;
ll a[100010];
ll tc = 0, n = 0;

int main() {
    fastio();
	#ifndef ONLINE_JUDGE
        readfromfile();
    #endif

    cin >> tc;
    ll q;
    while(tc--) {
        mp.clear(); s.clear();
        cin >> n >> q;
        arrayinput();

        for (ll i = 0; i < n; ++i) {
            mp[a[i]]++;
            if (a[i] > 0) s.insert(a[i]);
        }
        // for (ll i : s) debug(i);
        while (q--) {
            ll cmd, pos, val;
            cin >> cmd;
            if (cmd == 1) {
                cin >> pos >> val;
                mp[val]++;
                if (val > 0) s.insert(val);
                mp[a[pos-1]]--;
                if (mp[a[pos-1]] <= 0) s.erase(a[pos-1]);
                a[pos-1] = val;
            }
            else {
                cout << s.size() << endl;
            }
            // for (ll i : s) debug(i);
        }
    }
}