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
    int n; cin >> n;
    ll total = 0;
    ll num1 = 0;
    ll num0 = 0;
    for(int i = 0; i < n; i++){
        ll a, b, c, d; cin >> a >> b >> c >> d;
        num0 += abs(c - a);
        if(d - b < 0){
            total += min(c, a);
        }
        num1 += abs(d - b);
    }
    total += (num1 + num0) / 2;

    cout << total << endl;    
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}