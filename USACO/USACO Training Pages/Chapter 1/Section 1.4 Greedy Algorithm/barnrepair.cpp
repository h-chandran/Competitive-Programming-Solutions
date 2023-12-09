/*
ID: harishc4
TASK: barn1
LANG: C++                 
*/
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    ofstream fout ("barn1.out");
    ifstream fin ("barn1.in");

    int m, s, c; fin >> m >> s >> c;
    int arr[201] ={0};
    int minc = 201, maxc = -1;
    for(int i = 0; i < c; i++){
        int d; fin >> d;
        arr[d]++;
        minc = min(minc, d);
        maxc = max(maxc, d);

    }
    
    int ans = maxc - minc + 1;
    vector<int> gaps;
    int gapc = 0;
    for(int i = minc; i <= maxc; i++){
        if(arr[i] == 0){
            gapc++;
        } else{
            gaps.push_back(gapc);
            gapc = 0;
        }
    }
    sort(gaps.begin(), gaps.end(), greater<int>());
    int bound = min((int) gaps.size(), m - 1);
    for(int i = 0; i < bound; i++){
        ans -= gaps[i];
    }

    fout << ans << endl;


}