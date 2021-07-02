#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    scanf("%d\n\n", &t);
    while (t--) {
        map<string, int>m;
        int total = 0;
        string str;
        while (getline(cin,str)) {
            if(str.size() == 0) {
                break;
            }
            m[str]++;
            total++;
        }
        for (map<string, int>:: iterator itr = m.begin(); itr != m.end(); ++itr) {
            cout << itr->first << " " << fixed << setprecision(4) << itr->second*100.0/total << endl;
        }
        if (t > 0) {
            printf("\n");
        }
    }
}
