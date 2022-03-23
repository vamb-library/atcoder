#include <bits/stdc++.h>
using namespace std;

//#が縦横斜めで6個形成できるか判断する できるなら1,無理なら0
int judge(int i, int j, vector<string>& s);

int main(void){
    int n;  cin >> n;
    vector<string> s(n);
    string ans = "No";
    for(string& x : s){
        cin >> x;
    }

    //judge()で範囲外を参照しないようにループ
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(judge(i,j,s) == 1){
                ans = "Yes";
                break;
            }
        }
    }
    cout << ans << endl;
}
/*
s[i][j]が白ならcntを消費して黒として扱う。cntがゼロの時に白なら無理
これを縦横斜めで行う。
*/
int judge(int i, int j, vector<string>& s){
    int cnt;
    int res = 0;//0: 無理 1: できる
    int n = s.size();

    if(j < n-5){
        cnt = 2;
        for(int k=0; k<6; k++){
            if(s[i][j+k] == '.'){
                if(cnt == 0){
                    res = 0;
                    break;
                }else{
                    cnt--;
                    res = 1;
                }
            }else{
                res = 1;
            }
        }
        if(res == 1)    return 1;
    }

    if(i < n-5){
        cnt = 2;
        for(int k=0; k<6; k++){
            if(s[i+k][j] == '.'){
                if(cnt == 0){
                    res = 0;
                    break;
                }else{
                    cnt--;
                    res = 1;
                }
            }else{
                res = 1;
            }
        }
        if(res == 1)    return 1;
    }

    if(i < n-5 && j < n-5){
        cnt = 2;
        for(int k=0; k<6; k++){
            if(s[i+k][j+k] == '.'){
                if(cnt == 0){
                    res = 0;
                    break;
                }else{
                    cnt--;
                    res = 1;
                }
            }else{
                res = 1;
            }
        }
        if(res == 1)    return 1;
    }

    if(i < n-5 && j >= 5){
        cnt = 2;
        for(int k=0; k<6; k++){
            if(s[i+k][j-k] == '.'){
                if(cnt == 0){
                    res = 0;
                    break;
                }else{
                    cnt--;
                    res = 1;
                }
            }else{
                res = 1;
            }
        }
    }
    
    return res;
}