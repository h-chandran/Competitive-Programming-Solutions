#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define ll long long
#define MOD 1000000007
#define PI 3.141592653589793238462643383
ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }


void solve(){
    int n; cin >> n;
    vector<ll> b(n);
    ll divisor = 0;
    for(int i = 0; i < n; i++){
        cin >> b[i];        
        divisor = gcd(b[i], divisor);
        
    }
    vector<ll> pos;
    for(int i = 1 ; i < n; i++){
        ll curdiv = gcd(b[i-1], b[i]);
        pos.push_back(b[i-1] / curdiv);
    }
    ll x = 1;
    for(int i = 0; i < pos.size(); i++){
       x =  lcm(x, pos[i]);
    } 
    cout << x << endl;
    
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}