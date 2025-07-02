#include <vector>
#include <iostream>

using namespace std;

#define ll long long

int main(){
    int n; cin >> n;
    if(n == 1){
        cout << 1 << endl;
        return 0;
    }
    if(n <= 3){
        cout << "NO SOLUTION";
        return 0;
    }
    if(n % 2 == 0){
        for(int i = 2; i <= n; i+=2){
            cout << i << " ";
        }
        for(int i = 1; i < n-2; i+=2){
            cout << i << " ";
        }
        cout << n-1;
    } else {
        for(int i = 2; i < n; i+=2){
            cout << i << " ";
        }
        for(int i = 1; i < n; i+=2){
            cout << i << " ";
        }
        cout << n;
    }
    
}