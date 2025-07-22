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
    ll l, r; cin >> l >> r;
    ll arr[] = {2, 3, 5, 7};
    ll arr2[] = {6, 10, 14, 15, 21, 35};
    ll arr3[] = {30, 42, 70, 105};
    ll range = r - l;
    ll ans = range + 1;
    ans -= range / 2 + range  / 3 + range / 5 + range / 7;
    ans += range / 6 + range / 10 + range / 14 + range / 15 + range / 21 + range / 35;
    ans -= range / 30 + range / 42 + range / 70 + range / 105;
    ans += range / 210;
    range;
    //cout << ans << endl;
    for(int i = 0; i < 4; i++){
        if(r % arr[i] <= range % arr[i] ){
          // cout << "hi" <<  arr[i] << endl;
            ans--;
        }
    }
    for(int i = 0; i < 6; i++){
        if(r % arr2[i] <= range % arr2[i] ){
         //  cout << "hi" <<  arr2[i] << endl;

            ans++;
        }
    }
    for(int i = 0; i < 4; i++){
        if(r % arr3[i] <= range % arr3[i] ){
         //  cout << "hi" <<  arr3[i] << endl;

            ans--;
        }
    }
    if(r % 210 <= range % 210 ){
        //   cout << "hi" <<  210 << endl;

            ans++;
    }
    cout << ans << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}