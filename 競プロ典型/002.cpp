#include <bits/stdc++.h>
using namespace std;

/*
全探査で十分に間に合う制約。"()"を"01"に置き換えて考える
"0"ならjudge++,"1"ならjudge--にし、judgeが負の値になることなく、
最終的にjudge = 0になる()列が正しいものとなる。
よく考えたら楽

ここで覚えるのは2進数の扱い方である
1つ目のコードがこれから使うべき2進数の書き方であり、
2つ目が始め書いたコードである。
*/


//1つ目の書き方
int main(void){
    int N;  cin >> N;
    //(1 << N) 1を左にNbitシフトした値　i.e. 2^N
    for(int i=0; i<(1 << N); i++){  
        string s = "";
        int judge = 0;
        for(int j=N-1; j>=0; j--){
            //値i の(2進数表記における)jbit目が"0"なら
            if((i & (1 << j)) == 0){
                judge++;
                s += "(";
            }else{
                judge--;
                s += ")";
            }

            if(judge < 0)   break;
        }
        if(judge == 0)  cout << s << endl;
    }
}

//2つ目の書き方
/*
int main(void){
    int N;  cin >> N;
    int p = pow(2,N);   // p = 1 << N; と記述できる
    
    for(int i=0; i<p; i++){ // -> for(int i=0; i<(1<<N); i++){
        //2進数生成
        vector <int> s;
        int cnt = i;
        while(cnt != 0){
            s.push_back(cnt%2);
            cnt /= 2;
        }
        int len = s.size();
        while(len != N){
            s.push_back(0);
            len++;
        }
        reverse(s.begin(), s.end());

        //判定
        int judge = 0;
        for(int j=0; j<len; j++){
            if(s[j] == 0){
                judge++;
            }else{
                judge--;
            }

            if(judge < 0)   break;
        }

        if(judge == 0){
            for(int x : s){
                if(x == 0)  cout << '(';
                else        cout << ')';
            }
            cout << endl;
        }
    }
}
*/