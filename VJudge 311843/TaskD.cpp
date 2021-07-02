#include <bits/stdc++.h>
using namespace std;
int main() {
    string line;
    while (getline(cin, line) ) {
        string main = "";
        vector<string>v;
        string temp = "";
        bool flag = false;
        for (int i = 0; i < line.size(); ++i) {
            if (line[i] == '[' && i != line.size()-1) {
                int j = i + 1;
                while (line[j] != '[' && line[j] != ']') {
                    temp += line[j];
                    ++j;
                    if (j == line.size()) {
                        v.push_back(temp);
                        flag = true;
                        break;
                    }
                }
                if (flag) {
                    break;
                }
                v.push_back(temp);
                temp = "";
                if (line[j] == '[') {
                    i = j-1;
                    continue;
                }
                i = j;
            } else {
                if (line[i] == ']') {
                    continue;
                }
                if (line[i] != '[') {
                    main += line[i];
                }
            }
        }
        for (int i = v.size()-1; i >= 0; --i) {
            cout << v[i];
        }
        cout << main << endl;
    }
}
