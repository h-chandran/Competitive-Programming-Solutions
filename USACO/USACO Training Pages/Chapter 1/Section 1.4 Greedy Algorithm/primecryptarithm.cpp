/*
ID: harishc4
TASK: crypt1
LANG: C++                 
*/
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

vector<int> v;

bool crypt(int a, int b){
    int p1 = a * b;
    int p2 = (b % 10) * a;
    int p3 = (b / 10) * a;
    int count = 0;
    while(p1 != 0){
        if((find(v.begin(), v.end(), p1 % 10) == v.end())){
            return false;
        }
        p1 /= 10;
    }
    while(p2 != 0){
        if(find(v.begin(), v.end(), p2 % 10) == v.end()){
            return false;
        }
        p2 /= 10;
        count++;
    }
    while(p3 != 0){
        if((find(v.begin(), v.end(), p3 % 10) == v.end())){
            return false;
        }
        p3 /= 10;
        count++;
    }
    if(count != 6){
        return false;
    }
    return true;
}

int main() {
    ofstream fout ("crypt1.out");
    ifstream fin ("crypt1.in");

    int n; fin >> n;
    for(int i = 0; i < n; i++){
        int c; fin >> c;
        v.push_back(c);
    }
    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                for(int m = 0; m < n; m++){
                    for(int p = 0; p < n; p++){
                        int c1 = v[i] * 100 + v[j] * 10 + v[k];
                        int c2 = v[m] * 10 + v[p];
                        
                        if(crypt(c1,c2)){
                            ans++;
                        }

                    }
                }
            }
        }    
    }

    fout << ans << endl;
}