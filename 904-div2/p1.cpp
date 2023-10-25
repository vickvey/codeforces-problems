/**
 * Jay Shree Ram
 * Author : Vivek Kumar
 */
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vll = vector<ll>;

constexpr int mod = 1e9 + 7;

inline ll digitSum(ll x) {
    ll sum = 0;
    while(x != 0) {
        sum += x%10;
        x /= 10;
    } return sum;
}

void solve() {
    // code here
    ll x = 0, k = 0;
    cin >> x >> k;

    // logic
    if(k == 1) {
        cout << x << endl;
        return;
    }

    for(ll i = x; x<INFINITY; x++) {
        if(digitSum(x)%k == 0) {
            break;
        }
    }
    cout << x << endl;
}

// Driver Code
int main() {
    // code here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    cin >> t;

    while(t--) {
        solve();
    }
    return 0;
}