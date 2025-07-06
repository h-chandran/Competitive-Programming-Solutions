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
    vector<int> a(n);
    vector<ll> sum(n);
    ll curmin = INT_MAX;
    ll minsum = LONG_MAX;

    for(int i = 0; i < n; i++){
        cin >> a[i];
        curmin = min((ll) a[i], curmin);
        
        if(i > 0){
            minsum = min(sum[i-1] + curmin, minsum);
            sum[i] = curmin + sum[i-1];
        } else{
            sum[i] = curmin;
        }

    }
    minsum = min(minsum, sum[n-1]);
    cout << minsum << endl;
    
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}