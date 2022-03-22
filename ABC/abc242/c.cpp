#include <bits/stdc++.h>
using namespace std;
#define mod 998244353
//大きな値をMODで出力するときの方法
//常にmodを取ることで998244353以下で保持できる
//exmp: (1+2+3)%2 = 0, -> ((1%2)+(2%2)+(3%2))%2 = 0

//わからん 
//漸化式を立てて動的計画法DPによってとく
//再起させるとメモリ足りなくてできなかった
//(nが大きすぎると"segmentation fault" がでるので多分変なとこアクセスしちゃう）
//void dynamic_program(int num, int k, vector<vector<long long>> &res);


int main(void){
    int n;  cin >> n;
    long long ans = 0;
    vector<vector<long long>> res(n, vector<long long>(9,1));
    //res[n][k] 先頭 "k+1" で、残りn桁のときの場合の数を格納する
/*
    res[0][0]から順番に場合の数を計算していく。

    先頭の数字(k)が1のとき、res[num-1][1]+res[num-1][2],
    先頭の数字(k)が9のとき、res[num-1][8]+res[num-1][9],
    それ以外のとき、    res[num-1][k-1]+res[num-1][k]+res[num-1][k+1]
    を計算し返す。
*/

    for(int num=1; num<n; num++){
        for(int k=0; k<9; k++){
            if(k == 0){
                res[num][k] = res[num-1][0]+res[num-1][1];
            }else if(k == 8){
                res[num][k] = res[num-1][7]+res[num-1][8];
            }else{
                res[num][k] = res[num-1][k-1]+res[num-1][k]+res[num-1][k+1];
            }
            res[num][k] %= mod;
        }
    }

    for(int i=0; i<9; i++){
        //先頭k+1で残りn-1桁の場合の数
        //cout << res[n-1][i-1] << endl;
        ans += res[n-1][i];
        ans %= mod;
    }
    cout << ans << endl;
}
/*
void dynamic_program(int num, int k, vector<vector<long long>> &res){
    //res[num][k] の値を計算する
    /*
    resの値が0でない（既に存在する）なら計算せずその値を用いる
    res[0][k] のときはkに関わらず1とする (res[0][k] = 1)

    先頭の数字(k)が1のとき、res[num-1][1]+res[num-1][2],
    先頭の数字(k)が9のとき、res[num-1][8]+res[num-1][9],
    それ以外のとき、    res[num-1][k-1]+res[num-1][k]+res[num-1][k+1]
    を計算し返す。
    if(res[num][k] == 0){
        if(num == 0){
            res[num][k] = 1;
        }else{
            if(k == 0){
                dynamic_program(num-1,0,res);
                dynamic_program(num-1,1,res);
                res[num][k] = res[num-1][0]+res[num-1][1];
            }else if(k == 8){
                dynamic_program(num-1,7,res);
                dynamic_program(num-1,8,res);
                res[num][k] = res[num-1][7]+res[num-1][8];
            }else{
                dynamic_program(num-1,k-1,res);
                dynamic_program(num-1,k,res);
                dynamic_program(num-1,k+1,res);
                res[num][k] = res[num-1][k-1]+res[num-1][k]+res[num-1][k+1];
            }
        }
    }
}*/