#include <bits/stdc++.h>


using namespace std;


void solve(){
    int n; cin >> n;
    if(n % 2 == 0 && !(log2(n) == floor(log2(n)))){
        int high = (int) log2(n);
        cout << pow(2,high + 1) - 1 << "\n";
        int last0 = pow(2,high) + 1, last1 = pow(2,high), last2 = pow(2,high) - 1;
        for(int i = 1; i <= n; i++){
            if(i != last0 && i != last1 && i != last2){
                cout << i << " ";
            }
        }

        cout << last0 << " " << last1 << " " << last2;
    } else if(n % 2 == 0) {
        cout << n * 2 - 1 << "\n";
        int last = 1, last0 = 3, last1 = n-2, last2 = n - 1, last3 = n;
        for(int i = 1; i <= n; i++){
            if(i != last && i != last0 && i != last1 && i != last2 && i != last3){
                cout << i << " ";
            }
        }
        cout << last << " " <<last0 << " " << last1 << " " << last2 << " " << last3;
    } else{
        cout << n << "\n";
        int last = 1, last0 = 3, last1 = n-1, last2 = n;
        for(int i = 1; i <= n; i++){
            if(i != last && i != last0 && i != last1 && i != last2){
                cout << i << " ";
            }
        }
        cout << last << " " << last0 << " " << last1 << " " << last2;
    }

    cout << "\n";
}
int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}