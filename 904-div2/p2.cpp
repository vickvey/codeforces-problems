/**
 * Jay Shree Ram
 * Author : Vivek Kumar
 */
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vll = vector<ll>;

constexpr int mod = 1e9 + 7;

void generateBinaryCombinations
(ll x, ll y, std::vector<ll>& combination, ll totalLength, ll pos = 0) {
    if (pos == totalLength) {
        // Push the combination into the vector
        combination.push_back(0);
        for (ll i = 0; i < totalLength; i++) {
            combination.back() = combination.back() * 10 + combination[i];
        }
        return;
    }

    if (x > 0) {
        combination[pos] = 1;
        generateBinaryCombinations(x - 1, y, combination, totalLength, pos + 1);
    }

    if (y > 0) {
        combination[pos] = 0;
        generateBinaryCombinations(x, y - 1, combination, totalLength, pos + 1);
    }
}

void solve() {
    // code here
    ll n = 0;
    cin >> n;

    string s;
    cin >> s;
    
    long long decimalNumber = 0;
    for (ll i = 0; i < n; i++) {
        decimalNumber = (decimalNumber << 1) | (s[i] - '0');
    }

    ll count_ones = 0, count_zeroes = 0;
    for(ll i = 0; i<s.size(); i++) {
        if(s[i] == '1') {
            count_ones++;
        } else {
            count_zeroes++;
        }
    }

    std::vector<ll> combination;
    generateBinaryCombinations
    (count_ones, count_zeroes, combination, count_ones+count_zeroes);
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