/**
 * Jay Shree Ram
 * Author : Vivek Kumar
 */
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vll = vector<ll>;

constexpr int mod = 1e9 + 7;

bool isPresent(const std::string& s, const std::string& x) {
    // Use the find method to check if string s is present in string x
    return x.find(s) != std::string::npos;
}

void solve() {
    ll n = 1, m = 1;
    cin >> n >> m;

    string x, s; // x.size() = n, s.size() = m
    cin >> x >> s;

    // make sure that x.size() >= s.size()
    ll count = 0;
    while(x.size() < s.size()) {
        // cout << x << endl;
        x += x;
        count++;
    }

    // Now x.size() >= s.size()
    ll first = 0;

    // check if s is present in x
    if(isPresent(s, x)) {
        cout << count << endl;
        return;
    } 

    // if s is not present in x, then we need to check if s is present in x + x
    x += x;
    count++;
    if(isPresent(s, x)) {
        cout << count << endl;
        return;
    }
    cout << "-1\n";
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