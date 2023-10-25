/**
 * Jay Shree Ram
 * Author : Vivek Kumar
 */
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vll = vector<ll>;

constexpr int mod = 1e9 + 7;

void solve() {
    // code here
    ll a, b, c;
    cin >> a >> b >> c;
    vector<ll> v = {a, b, c};

    if(v[0] == v[1] && v[1] == v[2]) {
        cout << "YES\n";
        return;
    }

    ll sum = a + b + c;

    if(sum % 6 == 0) {
        ll x = sum / 6;
        if(v[0] >= x && v[1] >= x && v[2] >= x) {
            if(v[0] == v[1] || v[1] == v[2]) {
                cout << "YES\n";
                return;
            }
            if((v[0]+v[1]) >= v[2] || (v[1]+v[2]) >= v[0] || (v[2]+v[0]) >= v[1]) 
            {
                cout << "YES\n";
                return;
            }
        }
    }
    if(sum % 5 == 0) {
        ll x = sum / 5;
        if(v[0] >= x && v[1] >= x && v[2] >= x) {
            if(v[0] == v[1] || v[1] == v[2]) {
                cout << "YES\n";
                return;
            }
            if((v[0]+v[1]) >= v[2] || (v[1]+v[2]) >= v[0] || (v[2]+v[0]) >= v[1]) 
            {
                cout << "YES\n";
                return;
            }
        }
    }
    if(sum % 4 == 0) {
        ll x = sum / 4;
        if(v[0] >= x && v[1] >= x && v[2] >= x) {
            if(v[0] == v[1] || v[1] == v[2]) {
                cout << "YES\n";
                return;
            }
            if((v[0]+v[1]) >= v[2] || (v[1]+v[2]) >= v[0] || (v[2]+v[0]) >= v[1]) 
            {
                cout << "YES\n";
                return;
            }
        }
    }
    cout << "NO\n";
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