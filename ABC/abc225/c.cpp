#define _GLIBCXX_DEBUG  //vector の要素を超えて参照したときのエラーメッセージを表示
#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n,m; cin >> n >> m;
    int start_i,start_j;    //行列bの左上が行列aのi,j行目  
    bool flag = true;
    vector<vector<int>> num(n, vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> num[i][j];
        }
    }
    start_i = (num[0][0]-1)/7;
    start_j = (num[0][0]-1)%7+1;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            //bが例えば{4,5,6,7,8,9} とかでもYesになる
            if(num[i][j] != (start_i+i)*7+start_j+j){
                flag = false;
                break;
            }
        }
        if(flag == false)   break;
    }

    if(flag == true){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

}