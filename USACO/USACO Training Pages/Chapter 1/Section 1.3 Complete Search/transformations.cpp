/*
ID: harishc4
TASK: transform
LANG: C++                 
*/
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    ofstream fout ("transform.out");
    ifstream fin ("transform.in");

    int n; fin >> n;
    char a[10][10], b[10][10], t1[10][10], t2[10][10], t3[10][10], t4[10][10], t5[10][10], t6[10][10];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            fin >> a[i][j];
        }
    }    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            fin >> b[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            t1[i][n-j-1] = a[j][i];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            t2[i][n-j-1] = t1[j][i];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            t3[i][n-j-1] = t2[j][i];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            t4[i][n-j-1] = a[i][j];
        }
    }
    bool works = true;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(b[i][j] != t1[i][j]){
                works = false;
            }
        }
    }

    if(works){
        fout << 1 << endl; return 0;
    }
    
    works = true;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(b[i][j] != t2[i][j]){
                works = false;
            }
        }
    }

    if(works){
        fout << 2 << endl; return 0;
    }
    works = true;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(b[i][j] != t3[i][j]){
                works = false;
            }
        }
    }

    if(works){
        fout << 3 << endl; return 0;
    }
    works = true;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(b[i][j] != t4[i][j]){
                works = false;
            }
        }
    }

    if(works){
        fout << 4 << endl; return 0;
    }

    works = true;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            t5[i][n-j-1] = t4[j][i];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(b[i][j] != t5[i][j]){
                works = false;
            }
        }
    }

    if(works){
        fout << 5 << endl; return 0;
    }

    works = true;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            t6[i][n-j-1] = t5[j][i];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(b[i][j] != t6[i][j]){
                works = false;
            }
        }
    }

    if(works){
        fout << 5 << endl; return 0;
    }

    works = true;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            t5[i][n-j-1] = t6[j][i];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(b[i][j] != t5[i][j]){
                works = false;
            }
        }
    }

    if(works){
        fout << 5 << endl; return 0;
    }

    works = true;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(b[i][j] != a[i][j]){
                works = false;
            }
        }
    }

    if(works){
        fout << 6 << endl; return 0;
    }
    

    fout << 7 << endl;
    return 0;
}