#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    getline(cin, str);
    string ans = "";
    for (int i = str.size()-1; i >= 0; --i) {
        ans += str[i];
    }
    cout << ans << endl;
}
