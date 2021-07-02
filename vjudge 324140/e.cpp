#include <bits/stdc++.h>
using namespace std;
int main() {
    set<int>s;
    int tc;
    scanf("%d", &tc);
    while (tc--) {
        int y,x;
        scanf("%d %d", &y, &x);
        if (y == 1) {
            s.insert(x);
        } else if(y == 2) {
            s.erase(x);
        } else {
            set<int>::iterator itr = s.find(x);
            if (itr == s.end()) {
                printf("No\n");
            } else {
                printf("Yes\n");
            }
        }
    }
}
