#include <bits/stdc++.h>
using namespace std;

//各行と列で累積取るだけでいけそう

int main(void){
    int H,W;    cin >> H >> W;
    //入力行列と累積和
    vector<vector<int>> A(H+1,vector<int> (W+1,0));
    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            cin >> A[i][j];
            A[i][W] += A[i][j];
            A[H][j] += A[i][j];
        }
    }

    int ans;
    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            ans = A[i][W] + A[H][j] - A[i][j];
            cout << ans;
            if(j != W-1)    cout << " ";
        }
        cout << endl;
    }
}