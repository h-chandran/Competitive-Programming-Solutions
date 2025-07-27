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
    vector<ll> v(n);
    ll minx = INT_MAX;
    bool pos = true;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        minx = min(v[i],minx);
        if(v[i] >= minx * 2){
            pos = false;
        }
    }

    if(pos){
        cout << "YES" << endl;
    } else{
        cout << "NO" << endl;
    }

}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}