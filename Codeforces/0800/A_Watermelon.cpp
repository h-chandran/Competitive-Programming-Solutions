#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n; cin >> n;
    string res  = (n % 2 == 0 && n != 2) ? "YES" : "NO";
    cout << res << endl;
    
}
