#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define ll long long
#define MOD 1000000007
#define PI 3.141592653589793238462643383

void solve(){
    ll n, c; cin >> n >> c;
    double d = c;
    vector<ll> a(n); 
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    ll ans = 0;
    for(int i = a.size() - 1; i >= 0; i--){
        if(d < a[i]){
            ans++;
        } else{
            d /= 2;
        }
    }
    cout << ans << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}