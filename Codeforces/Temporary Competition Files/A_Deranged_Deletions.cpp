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
    int n; cin >> n;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        b[i] = a[i];
    }
    bool der = true;
    sort(b.begin(), b.end());
    while(b.size() > 0){
        for(int i = 0; i < b.size(); i++){
            der = true;
            if(b[i] == a[i]){
                a.erase(a.begin()+ i); b.erase(b.begin() + i);
                i--;
                der = false;
            }
        }
        if(der == true){
            cout << "YES" << endl;
            cout << a.size() << endl;
            for(int i = 0; i < a.size(); i++){
                cout << a[i] << " ";
            }
            cout << endl;
            return;
        }
        sort(b.begin(), b.end());

    }
    cout << "NO" << endl;
    
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}