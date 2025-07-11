#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

#define ll long long

ll solve(){
    ll y, x; cin >> y >> x;
    ll row = max(y,x);
    if(row % 2 == 0){
        if(y >= x){
            return pow(row,2) - x + 1;
        } 
        return pow(row,2) - x + 1 - (row - y);
    } else{
        if(x >= y){
            return pow(row,2) - y + 1;
        } else{
            return pow(row,2) - y + 1 - (row - x);
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cout << solve() << endl;
    }
}