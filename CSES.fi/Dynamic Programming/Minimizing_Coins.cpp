#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

vector<int> coins;

vector<int> arr(2000001,INT_MAX);

int main(){
    int n, x; cin >> n >> x;
    
    for(int i = 0; i < n; i++){
        int c; cin >> c; coins.push_back(c);
    }
    for(int i = 0; i < n; i++){
        arr[coins[i]] = 1;
    }
    
    for(int i = *min_element(coins.begin(), coins.end()); i <= x; i++){
        if(arr[i] == INT_MAX){
            continue;
        }
        for(int j = 0; j < n; j++){
            
            arr[i + coins[j]] = min(arr[i+coins[j]], arr[i] + 1);
        }
    }
    
    if(arr[x] == INT_MAX){
        cout << -1 << endl;
    } else{
        cout << arr[x] << endl;
    }
}