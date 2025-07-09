#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;
#define ll long long
multiset<ll> ms;

ll search(ll c){
    set<ll>::iterator it = ms.upper_bound(c);
    if(it == ms.begin()){
        return -1;
    }

    ll ans = *--it;
    ms.erase(ms.find(ans));
    return ans;
}

int main(){
    
    int n, m; cin >> n >> m;
    for(int i = 0; i < n; i++){
        ll c; cin >> c;
        ms.insert(c);
    } 
    for(int i = 0; i < m; i++){
        ll c; cin >> c;
        cout << search(c) << endl;
        
        

    }

    
}