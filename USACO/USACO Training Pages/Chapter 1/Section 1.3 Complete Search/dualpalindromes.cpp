/*
ID: harishc4
TASK: dualpal
LANG: C++                 
*/
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

char dig(int digit){
    switch(digit){
        case 19:
            return 'J';
            break;
        case 18:
            return 'I';
            break;
        case 17:
            return 'H';
            break;
        case 16:
            return 'G';
            break;
        case 15:
            return 'F';
            break;
        case 14:
            return 'E';
            break;
        case 13:
            return 'D';
            break;
        case 12:
            return 'C';
            break;
        case 11:
            return 'B';
            break;
        case 10:
            return 'A';
            break;
        default:
            return (char) (digit + 48);
    }
}
string convert(int b10, int b){
    string res = "";
    while(b10 != 0){
        
        res += dig(b10 % b);
        b10 /= b;
    }
    if(res == ""){
        return "0";
    }
    
    reverse(res.begin(), res.end());
    return res;
}

bool pal(string p){

    for(int i = 0; i < p.length() / 2; i++){
        if(p[i] != p[p.length() - i - 1]){
            return false;
        }
    }

    return true;
}

int main(){

    ofstream fout ("dualpal.out");
    ifstream fin ("dualpal.in");

    int n, m; fin >> n >> m;
    int count = 0;
    m++;
    while(count < n){
        int temp = 0;
        for(int i = 2; i <= 10; i++){
            string conv = convert(m, i);
            if(pal(conv)){
                temp++;
            }
        }
        if(temp >= 2){
            fout << m << endl;
            count++;
        }
        m++;
    }

    return 0;
}