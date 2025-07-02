#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define ll long long
#define MOD 1000000007

vector<ll> ans(1000001);
ll dice(ll n){
    
    if(n <= 0){
        return 0;
    } 
    if(ans[n] != 0){
        return ans[n];
    }

    ans[n] = (dice(n-1) + dice(n-2) + dice(n-3) + dice(n-4) + dice(n-5) + dice(n-6) + ((n == 1 || n == 2 || n == 3 || n == 4 || n == 5 || n == 6))) % MOD;
    return ans[n];
}


int main(){
    ll n; cin >> n;
    cout << dice(n);
}