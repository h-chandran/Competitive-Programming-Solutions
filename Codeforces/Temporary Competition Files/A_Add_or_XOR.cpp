#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define ll long long
#define MOD 1000000007
#define PI 3.141592653589793238462643383

ll solve(){
    ll a, b, x, y;
    cin >> a >> b >> x >> y;
    if(a == b) return 0;
    if(a < b){
        if((b-a) %2 == 0){
            return ((b-a) / 2) * (x + min(x,y));
        } else if((b-a) % 2 == 1){
            if(b % 2 == 1){
                return ((b-a) / 2) * (x + min(x,y)) + min(x,y); 
            } else{
                return ((b-a) / 2) * (x + min(x,y)) + x;
            }
        }
    } else if(a - 1 == b && a %2 == 1){
        return y;
    } 

    return -1;
}

int main(){
    int t; cin >> t;
    while(t--){
        cout << solve() << endl;
    }
}