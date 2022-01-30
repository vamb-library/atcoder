#include <bits/stdc++.h>
using namespace std;
//だめだわかってない。

int maxjoy(int n, vector<vector<long long>> comp);

int main(void){
    int n;  cin >> n;
    vector<vector<long long>> comp(2*n-1, vector<long long>(2*n));
    
    for(int i=0; i<2*n-1; i++){
        for(int j=0; j<2*n-1-i; j++){
            cin >> comp[i][j];
        }
    }
    
    cout << maxjoy(n,comp) << endl;

}

int maxjoy(int n, vector<vector<long long>> comp){
    long long joy;
    long long joy_max;

    for(int i=0; i<2*n-1; i++){
        for(int j=0; j<2*n-1-i; j++){
            
        }
    }

    return joy_max;
}