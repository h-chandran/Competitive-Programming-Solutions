#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define ll long long
#define MOD 1000000007
#define PI 3.141592653589793238462643383

ll man(int x1, int y1,int x2, int y2){
    return abs(x1 - x2) + abs(y1 - y2);
}

void solve(){
    int n; cin >> n;
    vector<tuple<int, int, int>> a, b;
    for(int i = 0; i < n; i++){
        int x, y; cin >> x >> y;
        a.push_back(make_tuple(x,y, i+1));
        b.push_back(make_tuple(x,y, i+1));


    }
    sort(a.begin(), a.end(),[]( tuple<int, int, int> d, tuple<int, int, int> e) {
        return get<0>(d) < get<0>(e) || (get<0>(d) == get<0>(e) && get<1>(d) < get<1>(e));
    });
    
    sort(b.begin(), b.end(),[]( tuple<int, int, int> d, tuple<int, int, int> e) {
        return get<1>(d) < get<1>(e) || (get<1>(d) == get<1>(e) && get<0>(d) < get<0>(e));
    });
    ll totaldist = 0;
    for(int i = 0; i < n; i++){
        ll curdist = 0;
        if(man(get<0>(a[i]), get<0>(a[n-i-1]), get<1>(a[i]), get<1>(a[n-i-1])) > man(get<0>(b[i]), get<0>(b[n-i-1]), get<1>(b[i]), get<1>(b[n-i-1]))){

        }
    }
    
}


int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}