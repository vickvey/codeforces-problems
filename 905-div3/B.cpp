#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;

void solve() {
    // code here
    ll n = 0, k = 0;
    cin >> n >> k; // 0 <= k < n <= 1e5

    char temp = 0;
    unordered_map<char, ll> mp;
    for(ll i = 0; i<n; i++) {
        cin >> temp;
        mp[temp]++;
    } // hashed the values

    // lets find the number of odd values
    ll odd = 0, sum_even = 0;
    for(auto &i : mp) {
        if(i.second % 2 != 0) {
            odd++;
            sum_even += i.second - 1;
        } else {
            sum_even += i.second;
        }
    }

    // conditions for checking
    ll rem = k - odd;
    if(rem == 0) {
        cout << "YES\n";
    } else if(rem < 0){
        if(rem == -1) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    } else {
        // here rem > 0
        if(rem <= sum_even) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}

// driver code
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