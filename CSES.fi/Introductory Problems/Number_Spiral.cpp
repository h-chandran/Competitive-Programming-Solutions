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
            return (row * row - x + 1);
        } 
        return row * row - x + 1 - (row - y);
    } else{
        if(x >= y){
            return row * row - y + 1;
        } else{
            return row * row - y + 1 - (row - x);
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cout << solve() << endl;
    }

}