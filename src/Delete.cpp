#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    string ans = "";
    for (auto& c : s) {
        if (c != '.') {
            ans += c;
        }
    }

    cout << ans << endl;
}