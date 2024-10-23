
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;



int main(){
    long n; cin >> n;
    vector<long> v(n); 
    for(long i = 0; i < n; i++){
        cin >> v[i];
        
    }

    sort(v.begin(), v.end());
    long s = v.size();
    long m; 
    long q; cin >> q;
    for(long i = 0; i < q; i++){
        cin >> m;

        long low = 0, mid = (s - 1) / 2, high = s - 1;
        while(low <= high){
            if(m >= v[mid]){
               low = mid + 1;
                mid = (low + high) / 2;
            } else{
              high = mid - 1;
              mid = (low + high) / 2;
            }
        }
        cout << low << endl;
    }
}