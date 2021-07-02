#include <bits/stdc++.h>
using namespace std;
int main() {
    string tc;
    while (getline(cin, tc) && tc[0] != '0') {
        vector<string>v1;
        vector<string>v2;
        vector<int>v;
        if (isupper(tc[0])) {
            v1.push_back(tc);
        } else {
            v2.push_back(tc);
        }
        string str;
        int temp = 0;
        while (getline(cin, str) && str[0] != '1') {
            if (isupper(str[0])) {
                v2.push_back("-1");
                temp = v2.size()-1;
                v1.push_back(str);
            } else {
                v2.push_back(str);
                bool flag = false;
                for (int i = v2.size()-2; i >= 0; --i) {
                    if (v2[i] == "-1") {
                        flag = true;
                    }
                    if (v2[i] == str) {
                        if (flag) {
                             v2[i] = "0";
                             v.push_back(v2.size()-1);
                        } else {
                                v2.back() = "0";
                        }
                    }
                }

            }
        }
        for (int i = 0; i < v.size(); ++i) {
                v2[v[i]] = "0";
        }


        int a[v1.size()] = {0};
        int k = 0;
        for (int i = 0; i < v1.size(); ++i) {
                while (k < v2.size() && v2[k] != "-1") {
                        if (v2[k] != "0") {
                                a[i]++;
                        }
                        ++k;
                }
                ++k;
        }
        map<string, int>mp;
        for(int i = 0; i < v1.size(); ++i) {
                mp[v1[i]] = a[i];
        }
        sort(a, a+v1.size());
        for (int i = v1.size()-1; i >= 0; --i) {
            for (auto x : mp) {
                if (x.second == a[i]) {
                    cout <<  x.first << " " <<  x.second << endl;
                    if (i > 0 && a[i] == a[i-1]) {
                        --i;
                    } else {
                        break;
                    }
                }
            }
        }
    }
}
