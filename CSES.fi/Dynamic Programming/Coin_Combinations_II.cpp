#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;
#define ll long long
#define MOD 1000000007


vector<int> coins;

vector<int> arr(1000001);

int main(){
    int n, x; cin >> n >> x;
    for(int i = 0; i < n; i++){
        ll c; cin >> c; coins.push_back(c);
    }
    arr[0] = 1;
    for(int i = 0; i < n; i++){
       for(int j = 1; j <= x; j++){
            if(j - coins[i] > -1){
                arr[j] += arr[j- coins[i]];
                arr[j] %= MOD;
            }
       }
    }

    cout << arr[x];

}