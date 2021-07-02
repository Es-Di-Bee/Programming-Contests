#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    getline(cin, str);
    string str2 = "";
    for (int i = str.size()-1; i >= 0; --i) {
        str2 += str[i];
    }
    if (str == str2) cout << "Yes" << endl;
    else cout << "No" << endl;
}
