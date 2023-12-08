/*
ID: harishc4
TASK: milk2
LANG: C++                 
*/
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int arr[(int) 1e6] = {0};

int main(){

    ofstream fout ("milk2.out");
    ifstream fin ("milk2.in");
    int n; fin >> n;
    
    int end = 0;
    int begin = 1e6 - 1;
    for(int i = 0; i < n; i++){
        int a, b; fin >> a >> b;
        
        end = max(end, b);
        begin = min(a, begin);
        for(int j = a; j < b; j++){
            arr[j]++;
        }
    }
    int maxidle = 0;
    int maxfarm = 0;
    int curfarm = 0;
    int curidle = 0;
    for(int i = begin; i < end; i++){
        if(arr[i] != 0){
            curfarm++;
            maxidle = max(curidle, maxidle);

            curidle = 0;
        } else{
            maxfarm = max(maxfarm, curfarm);
            curidle++;
            curfarm = 0;
        }
    }
    maxfarm = max(maxfarm, curfarm);
    maxidle = max(curidle, maxidle);


    fout << maxfarm << " " << maxidle << endl;
 

    return 0;
}