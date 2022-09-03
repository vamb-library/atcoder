#include <bits/stdc++.h>
using namespace std;

int main(void){
    // N:切れ目の数 , L:羊羹の長さ , K:カットの数
    int N,L,K;    cin >> N >> L >> K;
    // 
    vector<int> A(N);
    for(int& x : A){
        cin >> x;
    }

    //2分探査により答えを探す。
    //仮答mid以上で羊羹を区切って行った場合、
    //末尾の羊羹の長さがmid未満か、K回区切れなかったら答えはmid未満
    //上記以外で区切ることができたら答えはmid以上
    int left = 0, right = L;
    int mid;
    while(left != right){
        mid = left + (right - left + 1)/2; //小数点切り上げ
        //cout << "left = " << left << " : ";
        //cout << "right = " << right << " : ";
        //cout << "mid = " << mid << endl;
        bool flag;
        int k = K;
        int ans;
        int idx = 0;

        for(int i=0; i<N; i++){
            if(i == 0){
                ans = A[0];
            }else{
                ans += A[i] - A[i-1];
            }
            if(ans >= mid){
                k--;
                ans = 0;
            }
            if(k == 0){
                idx = i;
                break;
            }
            
        }
        //最後の羊羹の区間の長さの計算
        int last = L - A[idx];
        if(k == 0){//最後の区間がmid以上なら区切れる
            if(last >= mid){
                flag = true;
            }else{
                flag = false;
            }
        }else{//区切る回数が残っているなら区切ることはできない
            flag = false;
        }

        if(flag){ //区切れるなら答えはmid以上
            left = mid;
        }else{  //区切れないなら答えはmid未満
            right = mid-1;
        }
    }

    cout << left << endl;
}