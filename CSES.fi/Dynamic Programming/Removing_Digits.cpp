#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;
#define ll long long
#define MOD 1000000007

int main(){
    int n; cin >> n;
    vector<int> dp(n+1, 1e9);
    dp[0] = 0;
    for(int i = 1; i <= n; i++){
        while(i > 0){
            int dig = i % 10;
            i /= 10;
            dp[i] = min(dp[i], dp[i-dig] + 1);
        }
    }
    cout << dp[n] << endl;
}