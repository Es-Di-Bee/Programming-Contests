#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    getline(cin, str);
    char ans = 0;
    if (str[0] == '-') ans = str[2];
    else ans = str[1];
    printf("%c\n", ans);
}
