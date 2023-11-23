/*
ID: harishc4
TASK: beads
LANG: C++                 
*/
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ofstream fout ("beads.out");
    ifstream fin ("beads.in");
    int n; fin >> n;
    vector<char> beads;
    int ans = 0;
    for(int i = 0; i < n; i++){
        char c; fin >> c;
        beads.push_back(c);
    }
    for(int i = 0; i < n; i++){
        beads.push_back(beads[i]);
    }

    for(int i = 0; i < n; i++){
        int a = 0, b = 0;
        char c1 = beads[i], c2 = beads[i+1];
        int d1 = i, d2 = i+1;
        int count = 0;

        while(d1 >= 0){
            if(beads[d1] == c1 || beads[d1] == 'w'){
                count++;
                d1--;
                if(c1 == 'w'){
                    if(d1 >= 0){
                        c1 = beads[d1];
                    }
                }
            } else{
                break;
            }
        }
        while(d2 < 2*n){
            if(beads[d2] == c2 || beads[d2] == 'w'){
                count++;
                d2++;
                if(c2 == 'w'){
                    if(d2 < 2*n){
                        c2 = beads[d2];
                    }
                }
            } else{
                break;
            }
        }  

        ans = max(ans, count);
    }


    if(ans >= n){
        fout << n << endl;
    } else{
        fout << ans << endl;
    }
    return 0;
}
