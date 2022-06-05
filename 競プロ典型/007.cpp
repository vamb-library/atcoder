#include <bits/stdc++.h>
using namespace std;

/*
N個のクラスがあり、番号i(1<=i<=N)のクラスはレーティングA[i]の生徒を対象とする。
Q人の生徒が入る。番号j(1<=j<=Q)の生徒のレーティングはB[i]。
不満度が存在し、クラスレーティングa=A[k]と生徒レーティングb=B[k]
とすると、その差の絶対値 |a-b| が不満度になる
各生徒の不満度の最小値を求めよ。クラスの人数は0~Qである。
1 <= N,Q <= 300000, 0 <= A[i],B[j] <= 10^9

ex.
------------input:
4
4000 4400 5000 3200
3
3312
2992
4229
------------output:
112
208
171
------------

クラスレートでソートして2分探索で最も近いレーティングを探す
最後に|a-b|で出力する
ちゃんとできたけど、入出力のコードがうまくいってなくて模範コード記述
模範コードはlower_boudを用いた2分探索あるから今後はそれ使おう。
lower_boudはイテレータ範囲内でKey以上の最初のイテレータを返す。(O(logN))

*/

/*
int main(){
    int N,Q; cin >> N;
    vector<int> A(N);
    for(int i=0; i<N; i++)  cin >> A[i];
    cin >> Q;
    vector<int> B(Q);
    for(int i=0; i<Q; i++)  cin >> B[i];

    sort(A.begin(), A.end());
    for(int i=0; i<Q; i++){
        int mid = lower_bound(A.begin(), A.end(), B[i]) - A.begin();
        //cout << mid << endl;
        int ans = abs(A[mid]-B[i]);
        if(mid < N-1) ans = min(ans, abs(A[mid+1] - B[i]));
        if(mid > 0) ans = min(ans, abs(A[mid-1] - B[i]));
        cout << ans << endl; 
    }
}*/


int main(void){
    int N,Q;    cin >> N;
    vector<int> A(N);
    for(int i=0; i<N; i++){
        cin >> A[i];
    }
    cin >> Q;
    vector<int> B(Q);
    for(int i=0; i<Q; i++){
        cin >> B[i];
    }

    sort(A.begin(),A.end());
    int sz = A.size();
    for(int j=0; j<Q; j++){
        int b = B[j];

        //生徒レートクラスを2分探索で検索
        int left = 0;
        int right = sz-1;
        while(left != right){
            int len = right-left+1;
            int mid = left+(len-1)/2;
            if(A[mid] < b){
                left = mid+1;
            }else{
                right = mid;
            }
        }
        int ans = abs(A[left] - b);
        if(sz != 1){
            if(left == 0){
                ans = min(ans, abs(A[left+1]-b));
            }else if(left == sz-1){
                ans = min(ans, abs(A[left-1]-b));
            }else{
                ans = min(ans, abs(A[left-1]-b));
                ans = min(ans, abs(A[left+1]-b));
            }   
        }
        
        cout << ans << endl;
    }
}
