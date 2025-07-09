#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
#define ll long long

vector<ll> h;
vector<bool> del;
ll binary(ll m){
    ll low = 0;
    ll high = h.size() - 1;
    ll ind = -1;
    ll mid = high / 2;
    
    while(low <= high){
        if(m >= h[mid] && mid < h.size() && mid >= 0){
            ind = max(mid,ind);
            low = mid+1;
            mid = (low + high) / 2;
        } else{
            high = mid - 1;
            mid = (low + high) / 2;
        }
    }
    
    ll ans = -1;
    ind++;
    do{
        ind--;

        if(ind != -1 && ind < h.size() && !del[ind]){
            ans = h[ind];
            del[ind] = true; 
            break;
        }
        
    } while(del[ind] && h[ind] >= 0);
    
    return ans;
}

int main(){
    int n, m; cin >> n >> m;
    for(int i = 0; i < n; i++){
        int c; cin >> c;
        h.push_back(c);
        del.push_back(false);
    } 
    sort(h.begin(), h.end());
    for(int i = 0; i < m; i++){
        int t; cin >> t;
        cout << binary(t) << endl;

        
    }
    
}