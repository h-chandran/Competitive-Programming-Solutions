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



void solve(){
    ll a, b, k; cin >> a >> b >> k;
    ll g = gcd(a,b);

    if(a / g <= k && b / g <= k){
        cout << "1" << endl;
    } else{
        cout << "2" << endl;
    }
    

}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}