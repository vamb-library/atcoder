#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
/*  むじぃ
数字c1...cK のみを使うことで作れるN桁の正の整数のうち
Bの倍数のものは何個あるでしょうか。mod 1000000007で答えよ

こういう場合の和を求めるのは動的計画法で解けときいた。
dp[上から何桁目][Bで割った余(Bの倍数)] = 場合の数
ex. N=8,B=7,c={1,4,9} dp[2][0] = 3
(mod 7で0になる2桁の数字は14,49,91の3つ)
O(NKB)でとけるが、N,Bをある程度制約した小課題1飲み溶けた。
い
さらに制約を大きくして一般化した問題に適用できるようになるらしいけど
よくわからなかったキーワードだけ示しておく。
ダブリング的手法で高速に求める

*/


int main(void){
    long long N,B,K;    cin >> N >> B >> K;
    vector<int> C(K, 0);
    for(int i=0; i<K; i++){
        cin >> C[i];
    }

    //dp[上から何桁目][Bで割った余] (10000*30)
    vector<vector<long long>> dp(N,vector<long long>(30, 0));
    int next;
    //dp[i][j] を求める
    for(int i=0; i<K; i++){
        //1桁めはCをBで割った余の部分だけ場合の数が増える
        dp[0][C[i]%B]++;
    }
    for(int i=0; i<N-1; i++){
        for(int j=0; j<B; j++){
            for(int t=0; t<K; t++){
                //一桁増えるとdp[i+1][next]は
                next = (10*j + C[t]) % B;
                dp[i+1][next] += dp[i][j];
                //毎回modしておく
                dp[i+1][next] %= mod;
            }
        }
    }

    cout << dp[N-1][0] << endl;
}