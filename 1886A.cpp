
//---------------------------------------------------------
// Jay Shree Ram
// Author : Vivek Kumar
//---------------------------------------------------------
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vll = vector<long long>;

constexpr int mod = 1e9 + 7;

//---------------------------------------------------------

void solve() {
    ll n = 0;
    cin >> n;

    // waste cases
    if(n < 7) {
        cout << "NO" << endl;
        return;
    }

    ll z = n-3;

    ll x = 1, y = 2;

    if(z % 3 == 0) {
        z -= 2;
        y += 2;
    } 

    if(z > y) {
        cout << "YES" << endl;
        cout << x << " " << y << " " << z << endl;
        return;
    }

    cout << "NO" << endl;
}

//---------------------------------------------------------
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
//---------------------------------------------------------