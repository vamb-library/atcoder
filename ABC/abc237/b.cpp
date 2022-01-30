#include <bits/stdc++.h>
using namespace std;

int main(void){
    int h,w;    cin >> h >> w;
    vector<vector<int>> arr(h,vector<int> (w));
    vector<vector<int>> ans(w,vector<int> (h));
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            cin >> arr[i][j];
        }
    }

    for(int j=0; j<w; j++){
        for(int i=0; i<h-1; i++){
            ans[j][i] = arr[i][j];
            cout << ans[j][i] << " ";
        }
        ans[j][h-1] = arr[h-1][j];
        cout << ans[j][h-1] << endl;
    }

}