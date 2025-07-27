#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <deque>
using namespace std;

#define ll long long
#define MOD 1000000007
#define PI 3.141592653589793238462643383

void solve(){
    deque<int> dq;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int p; cin >> p;
        dq.push_back(p);
    }
    string q = "";
    for(int i = 0; i < n; i++){
        int a = dq.front();
        int b = dq.back();
        if(i % 2 == 0){
            if(a > b){
                dq.pop_front();
                q += "L";
            } else{
                dq.pop_back();
                q += "R";
            }
        } else{
            if(a < b){
                dq.pop_front();
                q += "L";
            } else{
                dq.pop_back();
                q += "R";
            }
        }
    }
    cout << q << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}