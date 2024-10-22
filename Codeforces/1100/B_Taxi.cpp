#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <cmath>

using namespace std;

int main() {
    int n; cin >> n;
    int g[5] = {0};
    for(int i = 0; i < n; i++){
        
        int c; cin >> c;
        g[c]++;
    }

    int ans = g[4] + g[2]/2;
    g[2] %= 2;
    if(g[3] > g[1]){
        if(g[2] == 1){
            ans++;
        }

        ans += g[3];

    } else{
        ans += g[3];
        g[1] -= g[3];
        if(g[2] == 1){
            ans++;
            g[1] -= 2;
        }

        if(g[1] > 0){
            ans += ceil((g[1] / 4.0));
        }
    }

    cout << ans << endl;


    
}
