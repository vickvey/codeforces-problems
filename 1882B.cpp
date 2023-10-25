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
    ll n = 1;
    cin >> n;

    vector<set<ll>> v(n);

    for(ll i = 0; i<n; i++) {
        ll k = 1;
        cin >> k;

        // take input of k integers and store them in a set
        set<ll> s;
        for(ll j = 0; j<k; j++) {
            ll temp = 1;
            cin >> temp;
            s.insert(temp);
        } 
        v.push_back(s);
    } // input taking done

    // sort the vector of sets in ascending order of size of sets
    sort(v.begin(), v.end(), [](set<ll> a, set<ll> b) {
        return a.size() < b.size();
    });

    // lets make a set which is union of all sets
    set<ll> union_set;
    for(auto &s: v) {
        for(auto &x: s) {
            union_set.insert(x);
        }
    } // this is the union set

    // now lets iterate to each set and see how many elements are common with union set
    ll index = 0;
    ll min_count = INT_MAX; 
    for(ll i = 0; i<n; i++) {
        ll count = 0; 
        for(auto &x: v[i]) {
            if(union_set.find(x) != union_set.end()) {
                count++;
            }
        } 
        if(count < min_count) {
            min_count = count;
            index = i;
        }
    }

    cout << union_set.size() - min_count << endl;
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