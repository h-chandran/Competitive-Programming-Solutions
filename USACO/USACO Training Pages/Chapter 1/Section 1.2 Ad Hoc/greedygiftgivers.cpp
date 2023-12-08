/*
TASK: gift1
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
    ofstream fout ("gift1.out");
    ifstream fin ("gift1.in");

    int n; fin >> n;
    map<string, int> givers;
    vector<string> order(n);
    for(int i = 0; i < n; i++){
        string s; fin >> s;
        order[i] = s;
        givers[s] = 0;
    }
    
    while(!(fin.peek() == EOF)){
        string t; fin >> t;
        
        int a, b; fin >> a >> b;
        
        int c;
        if(b == 0){
            continue;
        } else{
            c = (a / b);
        }
        int d = a % b;
        for(int i = 0; i < b; i++){
            string str; fin >> str;
            givers[str] += c;
        }
        givers[t] += d;
        givers[t] -= a;
    }

    for(int i = 0; i < n; i++){
        fout << order[i] << " " << givers[order[i]] << endl;
    }


}
