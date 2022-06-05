#include <bits/stdc++.h>
using namespace std;

int main(void){
    //長さL、N個の切れ目からK個選択する
    int N,L,K;    cin >> N >> L >> K;
    //i番目の切れ目は左からAiの位置
    vector<int> A(N);
    for(int& x : A){
        cin >> x;
    }
    
    /*
    K+1個に分割する際、そのうち最小のピースが最大になる場合の長さを求める
    答えをm(2分探索)以上と仮定して、m以上の長さで分割できるかどうか判定する
    できるなら答えがm以上、できんのならm未満として2分探索で答えを求める
    //こんなの思いつかん
    */

    //2分探索用left,right,left==rightになると修了
    int left = 0,right = L;
    int i,m,ans;
    int buf = 0, k = K;

    while((right-left) != 1){
        m = left+(right-left)/2;
        k=K;
        //mで分割できるならleft=m,でなけれrばright=mでしぼめる
        for(i=0; i<N; i++){
            if(k != 0){
                if(i==0){
                    buf = A[i];
                }else{
                    buf += A[i]-A[i-1];
                }
                if(buf >= m){
                    k--;
                    buf = 0;
                }
            }else{
                break;
            }
        }
        //分割できるなら答えはm以上、できないならm以下が答え
        buf = L-A[i-1];
        if(k == 0 && buf >= m){
            left = m;
        }else{
            right = m;
        }
    }

    //最後にleft,rightのどちらが答えか判断する
    k=K;
    for(i=0; i<N; i++){
        if(k != 0){
            if(i==0){
                buf = A[i];
            }else{
                buf += A[i]-A[i-1];
            }
            if(buf >= right){
                k--;
                buf = 0;
            }
        }else{
            break;
        }
    }
    buf = L-A[i-1];
    if(k == 0 && buf >= right){
        ans = right;
    }else{
        ans = left;
    }
    cout << ans << endl;
}