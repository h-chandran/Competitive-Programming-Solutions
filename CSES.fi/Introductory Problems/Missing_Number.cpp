#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define ll long long
#define MOD 1000000007
#define PI 3.141592653589793238462643383



int main(){
    int n; cin >> n;
    vector<bool> v(n + 1, true);
    for(int i = 0; i < n-1; i++){
        int c; cin >> c;
        v[c] = false;
    }
    
    for(int i = 1; i <= n; i++){
        if(v[i]){

            cout << i << endl;
        }
    }
}