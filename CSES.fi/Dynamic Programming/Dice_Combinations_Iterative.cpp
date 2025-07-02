#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define ll long long
#define MOD 1000000007

vector<ll> ans(1000001);

int main(){
    int n; cin >> n;
    for(int i = 1; i < 7; i++){
        ans[i] = 1;
        for(int j = 1; j < i; j++){
            ans[i] += ans[j];
        }
    }
    for(int i = 7; i <= n; i++){
        ans[i] += (ans[i-1] + ans[i-2] + ans[i-3] + ans[i-4] + ans[i-5] + ans[i-6]) % MOD;
    }
    cout << ans[n];
}