/*
ID: harishc4
TASK: namenum
LANG: C++                 
*/
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    ofstream fout ("namenum.out");
    ifstream fin ("namenum.in");
    ifstream dict ("dict.txt");

    int ans = 0;
    int convert[256];

    convert['A'] = convert['B'] = convert['C'] = 2;
    convert['D'] = convert['E'] = convert['F'] = 3;
    convert['G'] = convert['H'] = convert['I'] = 4;
    convert['J'] = convert['K'] = convert['L'] = 5;
    convert['M'] = convert['N'] = convert['O'] = 6;
    convert['P'] = convert['R'] = convert['S'] = 7;
    convert['T'] = convert['U'] = convert['V'] = 8;
    convert['W'] = convert['X'] = convert['Y'] = 9;  

    string n; fin >> n;


    while(!dict.eof()){
        string name; dict >> name;
        bool valid = true;
        if(name.length() != n.length()){
            continue;
        }
        for(int i = 0; i < name.length(); i++){
            if(convert[name[i]] != ((int) n[i] - 48)){
                valid = false;
                break;
                
            }
        }
        if(!valid){
            continue;
        }
        fout << name << endl;
        ans++;
    }
    if(ans == 0){
        fout << "NONE" << endl;
    }
    return 0;
}