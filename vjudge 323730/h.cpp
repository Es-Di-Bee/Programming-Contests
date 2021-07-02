 #include <bits/stdc++.h>
 using namespace std;

 int main() {
    vector<int>v;
    v.push_back(2);
    for (int i = 3; i < 1000000; i++) {
        bool flag = true;
        for (int j = 2; j*j <= i; ++j) {
            if (i % j == 0) {
                flag = false;
                break;
            }
        }
        if (flag) {
            v.push_back(i);
        }
    }
    int tc;
    cin >> tc;
    while (tc--) {
        int num;
        scanf("%d", &num);
        printf("%d\n", v[num-1]);
    }

 }
