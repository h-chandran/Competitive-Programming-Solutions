#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define ll long long
#define MOD 1000000007
#define PI 3.141592653589793238462643383

bool pal(vector<int> a){
    for(int i = 0; i < a.size(); i++){
       if(a[a.size() - i - 1] != a[i]){
            
            return false;
       }
    }
    return true;
}

void solve(){
    int n, k; cin >> n >> k;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b.begin(), b.end());
    if(pal(a)){
    cout << "YES" << endl;
    return;
    }
    int rable =  b[k-1];
    for(int i = a.size(); i >= 0; i--){
        if(a[i] >= rable && a.size() >= k){
            a.erase(a.begin() + i);
            if(pal(a)){
                cout << "YES" << endl;
                return;
            }
        }
    }
    if(pal(a)){
                cout << "YES" << endl;
                return;
    }
    
    cout << "NO" << endl;
    return;
    
    

}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}