#include <bits/stdc++.h>
using namespace std;
int main() {
    int tc;
    scanf("%d", &tc);
    for(int p = 1; p <= tc; ++p) {
        printf("Case %d:\n", p);
        string url = "http://www.lightoj.com/";
        string command;
        stack<string>backS;
        stack<string>forwardS;
        while (getline(cin, command)) {
            if (command == "QUIT") {
                break;
            }
            if (command[0] == 'V') {
                vector<string>v;
                istringstream buf(command);
                for(string word; buf >> word;) {
                    v.push_back(word);
                }
                backS.push(url);
                url = v[1];
                while (!forwardS.empty()) {
                    forwardS.pop();
                }
                cout << v[1] << endl;
            } else if (command == "BACK") {
                if (backS.empty()) {
                    printf("Ignored\n");
                } else {
                    forwardS.push(url);
                    url = backS.top();
                    backS.pop();
                    cout << url << endl;
                }
            } else if (command == "FORWARD") {
                if (forwardS.empty()) {
                    printf("Ignored\n");
                } else {
                    backS.push(url);
                    url = forwardS.top();
                    forwardS.pop();
                    cout << url << endl;
                }
            }
        }

    }
}
