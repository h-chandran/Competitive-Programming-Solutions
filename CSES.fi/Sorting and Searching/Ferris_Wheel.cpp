#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long
int main(){
    ll n, x; cin >> n >> x;
    vector<ll> p(n);
    for(ll i = 0; i < n; i++){
        cin >> p[i];
    }
    sort(p.begin(), p.end());
    ll gondolas = 0;
    int first = 0, last = p.size()-1;
    while(first <= last){
        if(first == last){
            gondolas++;
            break;
        }
        if(p[last] + p[first] <= x){
            gondolas++;
            first++; last--;
        } else{
            gondolas++;
            last--;
        }
    }

    cout << gondolas;
}