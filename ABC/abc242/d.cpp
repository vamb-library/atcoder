#include <bits/stdc++.h>
using namespace std;

char func(long long t,long long k, string& S);

int main(void){
    string S;
    int Q;
    cin >> S >> Q;
    for(int i=0; i<Q; i++){
        long long t,k;
        cin >> t >> k;

        cout << func(t,k,S) << endl;
    }

}

/*
Sの先頭の文字は ->A->B->C->A-> の順で進む。ex. 「'A'が2回進む」A->B->C 「'C'を表す」
t = 0 のときfunc(t,k)はSのk文字目
k = 0 のときfunc(t,k)はSの先頭文字をt回進んだ文字
0<t,k のときfunc(t,k)はf(t-1,(k+1)/2)からk+1を2で割った余り+1回進んだ文字
(kが偶数なら2回、kが奇数なら1回進んだ文字)
この法則に従えばいいだけ。
*/
char func(long long t, long long k, string& S){
    long long prog;
    char res;
    string pre = "ABCABC";
    if(t == 0){
        res = S[k-1];
    }else if(k == 1){
        prog = t%3;
        res = S[0];
        
        if(res == 'A')      res = pre[prog];
        else if(res == 'B') res = pre[prog+1];
        else                res = pre[prog+2];
    }else{
        prog = (k+1)%2 + 1;
        res = func(t-1,(k+1)/2,S);

        if(res == 'A')      res = pre[prog];
        else if(res == 'B') res = pre[prog+1];
        else                res = pre[prog+2];
    }
    return res;
}