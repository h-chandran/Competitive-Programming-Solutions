/*
ID: harishc4
TASK: ride
LANG: C++                 
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");
    string a, b;
    fin >> a >> b;
    int u = 1;
    int f = 1;

    for(int i = 0; i < a.size(); i++){
        u *= a[i] - 64;
    }
    for(int i = 0; i < b.size(); i++){
        f *= b[i] - 64;
    }

    u = u % 47;
    f = f % 47;

    if(u == f){
        fout << "GO" << endl;
    } else{
        fout << "STAY" << endl;
    }
    return 0;
}
