#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n,k;    cin >> n >> k;  //n人順位k以内
    vector<vector<int>> poi(n, vector<int> (3,0));
    vector<int> sum(n,0);    //iの合計値 
    for (int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            cin >> poi[i][j];
            sum[i] += poi[i][j];
        }
    }
    vector<int> rank = sum;
    sort(begin(rank), end(rank), greater<>());
    //上からk位の人の点数
    int ans = rank[k-1];
    //これを+300で越えれる人がYES
    for(int i=0; i<n; i++){
        cout << (sum[i]+300 >= ans ? "Yes" : "No") << endl;
    }
}