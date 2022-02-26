#include <bits/stdc++.h>
using namespace std;
//なるほどわからん
int main(void){
    int n,x;    cin >> n >> x;
    vector<int> a(n),b(n);
    for(int i=0; i<n; i++){
        cin >> a[i] >> b[i];
    }
    //i(0~n)回目でj(0~x)に到達できるならdp=1
    vector<vector<int>> dp(n,vector<int>(x,0));
    for(int i=0; i<n; i++){
        for(int j=0; j<x; j++){
            
        }
    }
}