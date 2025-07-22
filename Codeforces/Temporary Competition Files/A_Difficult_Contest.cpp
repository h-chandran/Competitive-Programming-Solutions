#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define ll long long
#define MOD 1000000007
#define PI 3.141592653589793238462643383

void solve(){
    string s; cin >> s;
    string res;
    int tc = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] != 'T'){
            res += s[i];
        } else{
            tc++;
        }
    }
    for(int i = 0; i < tc; i++){
        cout << 'T';
    }
    cout << res;
    
    cout << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}