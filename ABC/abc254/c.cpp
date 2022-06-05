#include <bits/stdc++.h>
using namespace std;

#define INF 1000000001

int main(void){
    int N,K;    cin >> N >> K;
    vector<int> A(N);
    for(int i=0; i<N; i++){
        cin >> A[i];
    }
    vector<vector<int>> ans(K);
    for(int i=0; i<N; i++){
        ans[i%K].push_back(A[i]);
    }
    for(int i=0; i<K; i++){
        sort(ans[i].begin(), ans[i].end());
    }

    //ソート後に元のリストにものす
    vector<int> b(N);
    for(int i=0; i<K; i++){
        int len_j = ans[i].size();
        for(int j=0; j<len_j; j++){
            b[i+K*j] = ans[i][j];
            //cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    string str = "Yes";
    for(int i=0; i<N-1; i++){
        if(b[i] > b[i+1]){
            str = "No";
            break;
        }
    }
    cout << str << endl;
}

/*
int judge(vector<int> &vec, int sz);
int main(void){
    int N,K;    cin >> N >> K;
    vector<int> A(N);
    for(int i=0; i<N; i++){
        cin >> A[i];
    }
    //左(0~(N-K)まで)と右((N-K+1)~Nまで)に分けて、それぞれが昇順なら照準にソートできると思う(いやできない)
    int left_sz = N-K;
    int right_sz = K;
    vector<int> left(left_sz),right(right_sz);
    for(int i=0; i<left_sz; i++){
        left[i] = A[i];
    }
    for(int i=left_sz; i<N; i++){
        right[i-left_sz] = A[i];
    }

    int flag1 = judge(left, left_sz);
    int flag2 = judge(right, right_sz);

    if(flag1 == 1 && flag2 == 1){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }    
}

int judge(vector<int> &vec, int sz){
    int flag = 1;
    for(int i=0; i < sz-1; i++){
        if(vec[i] > vec[i+1]){
            flag = 0;
            break;
        }
    }

    return flag;
}*/