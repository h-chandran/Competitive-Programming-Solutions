#include <vector>
#include <iostream>
#include <algorithm>


using namespace std;
#define ll long long

int main(){
    ll n, m, k; cin >> n >> m >> k;
    vector<ll> a(n), b(m);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }

    sort(a.begin(), a.end(), greater<int>());
    sort(b.begin(), b.end(), greater<int>());
    ll ans = 0;
    while(a.size() != 0){
        if(b[b.size() - 1] >= a[a.size()-1]-k && b[b.size() - 1] <= a[a.size()-1]+k){
            ans++;
            a.erase(a.end()-1);
            b.erase(b.end()-1);

        } else if(b[b.size() - 1] < a[a.size()-1]-k){
            b.erase(b.end()-1);
        } else{
            a.erase(a.end()-1);
        }
        if(b.size() == 0){
            break;
        }
        
    }
    cout << ans;

}