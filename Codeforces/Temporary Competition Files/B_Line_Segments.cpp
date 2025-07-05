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
    ll n, px, py, qx, qy;
    cin >> n >> px >> py >> qx >> qy;
    vector<ll> a(n);
    double dist = sqrt((double) pow((px-qx), 2) + pow((py-qy), 2 ));
    ll sum = 0;
    ll maxdist = 0;
    
    for(int i = 0; i < n; i++){
        cin >> a[i];
        maxdist = max(maxdist, a[i]);
        sum += a[i];
    }
    sum -= maxdist;
    if(sum + dist >= maxdist && sum + maxdist >= dist){
        cout << "Yes" << endl;
    } else{
        cout << "No" << endl;
    }
    
    
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}