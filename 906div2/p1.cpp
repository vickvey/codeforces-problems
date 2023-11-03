// Jai Shree Ram
// Author : Vivek Kumar
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
 
using namespace std;
 
using ll = long long;
using ld = long double;
using p32 = pair<int,int>;
using p64 = pair<ll,ll>;
using pdd = pair<double,double>;
using v64 = vector<ll>;
using v32 = vector<int>;
using vv32 = vector<vector<int>>;
using vv64 = vector<vector<ll>>;
using vvp64 = vector<vector<p64>>;
using vp64 = vector<p64>;
using vp32 = vector<p32>;
const ll MOD = 1e9 + 7;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
 
void solve() {
    //code here
    ll n = 0;
    cin >> n;

    vector<ll> arr(n, 0);
    for(auto &x : arr) cin >> x;

    // logic here
    if(n == 2) {
        cout << "Yes\n";
        return;
    }

    map<ll, ll> m;
    for(auto x : arr) {
        m[x]++;
    } // hashed the values here

    if(m.size() == 1) {
        cout << "Yes\n";
        return;
    }

    // here m.size() == 2
    if(m.size() == 2) {
        ll ans = abs(m.begin()->second - (++m.begin())->second);
        if(ans >= 2) {
            cout << "No\n";
            return;
        } else {
            cout << "Yes\n";
            return;
        }
    }

    if(m.size() >= 3) {
        cout << "No\n";
        return;
    }
}
 
int main()
{
 fast_cin();
 ll t;
 cin >> t;
 while(t--) {
     solve();
 }
 return 0;
}