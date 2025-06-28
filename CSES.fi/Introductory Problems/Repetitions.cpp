#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define ll long long
#define MOD 1000000007
#define PI 3.141592653589793238462643383



int main(){
    string s; cin >> s;
    int maxr = 0, cur = 0; char c = ' ';
    for(int i = 0; i < s.length(); i++){
        
        if(c == s[i]){
            cur++;

        } else{
            cur = 1; c = s[i]; 
        }
        
        maxr = max(maxr, cur);
    }
    cout << maxr << endl;
}