#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define ll long long
#define MOD 1000000007
#define PI 3.141592653589793238462643383


int main(){
    int n; cin >> n;
    ll a; cin >> a;
    ll ans = 0;
    for(int i = 0; i < n-1; i++){
        ll b; cin >> b;
        if(b < a){
            ans += a-b;
            b = a;
        }
        a = b;
    }
    cout << ans;
}