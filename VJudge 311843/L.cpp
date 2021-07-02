#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 0, m = 0;
    while (cin >> n >> m) {
        bool flag1 = false, flag2 = false;
        string waste = "";
        getline(cin, waste);
        string a[n][m] = {" "};
        int c1 = 0;

        for (int i = 1; i <= n; ++i) {
            string str = "";
            getline(cin, str);
            int c2 = 0;

            for (int j = 0; j < str.size(); ++j) {
                string str2 = "";
                while(str[j] != ',') {
                    str2 += str[j];
                    if (j == str.size()-1) break;
                    ++j;
                }
                a[c1][c2] = str2;
                ++c2;
            }
            ++c1;
        }

        for (int cCount1 = 0; cCount1 < m-1; ++cCount1) {
            for (int cCount2 = cCount1+1; cCount2 < m; ++cCount2) {
                map <pair <string, string>, int> mp;
                for (int r = 0; r < n; ++r) {
                    pair <string, string> p = make_pair(a[r][cCount1], a[r][cCount2]);
                    if (mp.find(p) == mp.end()) {
                        mp.insert(make_pair(p, r));
                    } else {
                        cout << "NO" << endl;
                        cout << mp[p]+1 << " " << r+1 << endl;
                        cout << cCount1+1 << " " << cCount2+1 << endl;
                        flag1 = true;
                        break;
                    }
                }
                if (flag1) {
                    flag2 = true;
                    break;
                }
            }
            if (flag2) break;
        }
        if (flag1 == false) {
            cout << "YES" << endl;
        }
    }
}
