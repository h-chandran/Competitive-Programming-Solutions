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
    int n, m; cin >> n >> m;
    if((n > 2 && m > 2) || ((n > 2  && m > 1)|| n > 1 && m > 2)){
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