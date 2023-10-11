
//-------------------------------------------------------------------
// Jay Shree Ram
// author : Vivek Kumar (https://github.com/vickvey)
//-------------------------------------------------------------------
#include <bits/stdc++.h>
using namespace std;

using vll = vector<long long>;
using ll = long long;
constexpr int MOD = 1e9 + 7;

//-------------------------------------------------------------------
void solve();

int main() {
    // code here
    ll t = 0;
    cin >> t;

    while(t--) {
        solve();
    }
    return 0;
}
//-------------------------------------------------------------------
// Problem Link: Simple binary search
//-------------------------------------------------------------------
void solve() {
    // code here
    int n = 0;
    cin >> n;
    
    vll arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int x = 0; // search element
    cin >> x;

    // new way of binary search
    int lo = 0;
    int hi = n-1;

    while(hi - lo > 1) {
        int mid = (lo + hi) / 2;

        if(arr[mid] < x) {
            lo = mid + 1;
        } else {
            hi = mid;
        }
    }
    if(arr[lo] == x) {
        cout << lo << "\n";
    } else if(arr[hi] == x) {
        cout << hi << "\n";
    } else {
        cout << "not found\n";
    }
}

//-------------------------------------------------------------------