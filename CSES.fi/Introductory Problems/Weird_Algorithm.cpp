#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define ll long long
#define MOD 1000000007
#define PI 3.141592653589793238462643383



int main(){
    ll n; cin >> n;
    while(n > 1){
        cout << n << " ";
        if(n % 2 == 0){
            n /= 2;
        } else{
            n *= 3;
            n++;
        }
    }
    cout << "1";
}