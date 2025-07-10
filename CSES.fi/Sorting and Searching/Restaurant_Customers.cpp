#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
#define ll long long


int main(){
    int n; cin >> n;
    vector<pair<ll, bool>> c;
    for(int i = 0; i < n; i++){
        ll a, b; cin >> a >> b;
        c.push_back(make_pair(a, true));
        c.push_back(make_pair(b,false));
    }
    

    sort(c.begin(), c.end(),[](const pair<ll, bool>& d, const pair<ll, bool>& e) {
        return d.first < e.first;
    });

    int maxc = 0;
    int curc = 0;
    for(pair<int,bool> x : c){
        x.second ? curc++ : curc--;
        maxc = max(maxc, curc);
    }
    cout << maxc << endl;
    
}