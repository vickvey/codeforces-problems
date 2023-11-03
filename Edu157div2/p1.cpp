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
 
bool is_good(string s) {
    for(ll i = 0; i<s.length()-1; i++) {
        if(s[i] == s[i+1]) {
            return false;
        }
    } return true;
}

void solve() {
    ll n = 0, m = 0;
    cin >> n >> m;

    string s,t;
    cin >> s;
    cin >> t;

    // logic here
    // check if s is already good
    if(is_good(s)) {
        cout << "YES\n";
        return;
    }

    // check the validity of t
    for(ll i = 0; i<t.length()-1; i++) {
        if(t[i] == t[i+1]) {
            // cout << t[i] << t[i+1] << "\n";
            cout << "NO\n";
            return;
        }
    }

    // now t is valid
    if(t.length() == 1) {
        if(t[0] == '0') {
            for(ll i = 0; i<s.length()-1; i++) {
                if(s[i] == '0' && s[i+1] == '0') {
                    cout << "NO\n";
                    return;
                }
            }
            cout << "YES\n";
            return;
        } else {
            for(ll i = 0; i<s.length()-1; i++) {
                if(s[i] == '1' && s[i+1] == '1') {
                    cout << "NO\n";
                    return;
                }
            }
            cout << "YES\n";
            return;
        }
    }

    if(t.length() >= 2) {
        if(t[0] == '0' && t[t.length()-1] == '0') {
            // check if s has 2 continued 0s
            for(ll i = 0; i<s.length()-1; i++) {
                if(s[i] == '0' && s[i+1] == '0') {
                    cout << "NO\n";
                    return;
                }
            } 
            cout << "YES\n";
            return;
        }
        if(t[0] == '1' && t[t.length()-1] == '1') {
            // check if s has 2 continued 1s
            for(ll i = 0; i<s.length()-1; i++) {
                if(s[i] == '1' && s[i+1] == '1') {
                    cout << "NO\n";
                    return;
                }
            } 
            cout << "YES\n";
            return;
        }
        if(t[0] == '0' && t[t.length()-1] == '1'){
            // we have to make two checks
            for(ll i = 0; i<s.length()-1; i++) {
                if(s[i] == '0' && s[i+1] == '0') {
                    cout << "NO\n";
                    return;
                }
            }
            for(ll i = s.length()-1; i>=1; i--) {
                if(s[i] == '1' && s[i-1] == '1') {
                    cout << "NO\n";
                    return;
                }
            }
            cout << "YES\n";
            return;
        }
        if(t[0] == '1' && t[t.length()-1] == '0'){
            // we have to make two checks
            for(ll i = 0; i<s.length()-1; i++) {
                if(s[i] == '1' && s[i-1] == '1') {
                    cout << "NO\n";
                    return;
                }
            }
            for(ll i = s.length()-1; i>=1; i--) {
                if(s[i] == '0' && s[i-1] == '0') {
                    cout << "NO\n";
                    return;
                }
            }
            cout << "YES\n";
            return;
        }
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