#include <bits/stdc++.h>
using namespace std;

int main(void){
    int N;  cin >> N;
    vector<vector<int>> ans(N,vector<int>(N));
    for(int i=0; i<N; i++){
        for(int j=0; j<=i; j++){
            if(j == 0 || j == i){
                ans[i][j] = 1;
            }else{
                ans[i][j] = ans[i-1][j-1] + ans[i-1][j];
            }
        }
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<=i; j++){
            cout << ans[i][j];
            if(j == i)  cout << endl;
            else        cout << " ";
        }
    }
}