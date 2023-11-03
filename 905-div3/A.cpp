#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;

void solve() {
    // code here
    string s;
    cin >> s;

    // logic
    ll ans = 0;
    ll cursor = 1;

    for(ll i = 0; i<s.size(); i++) {
        ll fill_dig = s[i] - '0';
        
        if(fill_dig == cursor) {
            cursor = fill_dig;
            ans += 1;
            continue;
        }

        if(fill_dig == 0) {
            ans = ans - cursor + 11;
            cursor = 0;
            continue;
        }
        if(cursor == 0) {
            ans = ans - fill_dig + 11;
            cursor = fill_dig;
            continue;
        }

        if(fill_dig >= cursor) {
            ans = ans + fill_dig - cursor + 1;
            cursor = fill_dig;
        } else {
            // here fill_dig < cursor
            ans = ans + cursor - fill_dig + 1;
            cursor = fill_dig;
        }
    } cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 0;
    cin >> t;

    while(t--) {
        solve();
    }
    return 0;
}