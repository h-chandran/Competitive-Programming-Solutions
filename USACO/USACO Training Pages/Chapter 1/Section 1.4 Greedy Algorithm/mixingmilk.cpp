/*
ID: harishc4
TASK: milk
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
    ofstream fout ("milk.out");
    ifstream fin ("milk.in");

    int r, n; fin >> r >> n;
    int cost = 0;
    vector<pair<int,int>> money;
    for(int i = 0; i < n; i++){
        int a, b; fin >> a >> b;
        money.push_back(make_pair(a, b));
    }

    sort(money.begin(), money.end());
    
    for(auto farm: money){
        if(farm.second <= r){
            cost += farm.first * farm.second;
            r -= farm.second;
        } else{
            cost += farm.first * r;
            break;
        }
    }

    fout << cost << endl;
    


}