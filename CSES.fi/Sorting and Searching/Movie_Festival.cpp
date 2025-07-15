#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
#define ll long long

bool secondpairsort(pair<ll, ll> d, pair<ll, ll> e){
    return d.second < e.second;

}
int main(){
    int n; cin >> n;
    vector<pair<ll, ll>> movies;
    for(int i = 0; i < n; i++){
        ll a, b; cin >> a >> b;
        movies.push_back(make_pair(a, b));   
    }

    sort(movies.begin(), movies.end(), secondpairsort);
    int ans = 0;
    int curend = 0;
    for(int i = 0; i < n; i++){
        if(movies[i].first >= curend){
            ans++; curend = movies[i].second;
        }
    }
    cout << ans << endl;
}