/*
ID: harishc4
TASK: friday
LANG: C++                 
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream fout ("friday.out");
    ifstream fin ("friday.in");
    int n; fin >> n;
    int day = 2;
    int numdays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
    int arr[7] = {0};
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 12; j++){
            arr[(day+12) % 7]++;
            day += numdays[j];

            
            if((1900 + i) % 4 == 0 && (1900+i) % 100 != 0 && j == 1){
                day++;
            }
            if((1900 + i) % 400 == 0 && j == 1){
                day++;
            }
            day %= 7;
        }
    }
    
    for(int i = 0; i < 6; i++){
        fout << arr[i] << " ";
    }
    fout << arr[6] << endl;
    return 0;
}