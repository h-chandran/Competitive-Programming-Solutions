#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;
#define ll long long
#define MOD 1000000007


vector<int> coins;

vector<int> arr(1000001, -1);

ll ways(ll x){
    if(x < 0){
        return 0;
    }
    if(x == 0){
        return 1;
    }
    if(arr[x] > -1){
        return arr[x];
    }
    ll sum = 0;
    for(ll c : coins){
        sum += ways(x-c);
        sum %= MOD;
    }
    arr[x] = sum;
    return sum;
}
int main(){
    int n, x; cin >> n >> x;
    for(int i = 0; i < n; i++){
        ll c; cin >> c; coins.push_back(c);
    }
    cout << ways(x);


}