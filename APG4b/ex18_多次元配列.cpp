#define _GLIBCXX_DEBUG  //vector の要素を超えて参照したときのエラーメッセージを表示
#include <bits/stdc++.h>
using namespace std;

/*
あるゲーム大会にはN人が参加しM試合が行われました。各参加者には1からNの番号が割り当てられています。
試合に関する情報が与えられるので、M回の試合がすべて終了した時点での試合結果の表を作成し、出力してください。
ただし、同じ参加者のペアについて2回以上試合が行われることはないとします。
*/

int main(void){
    int n,m; cin >> n >> m; //人数n 試合数m
    vector<int> a(m),b(m);   //試合i の勝者番号a[i] 敗者番号b[i]
    vector<vector<char>> ans(n, vector<char>(n, '-'));  //(n'-') かわいい んむー
    
    for(int i=0; i<m; i++){
        cin >> a[i] >> b[i];
        ans[a[i]-1][b[i]-1] = 'o';
        ans[b[i]-1][a[i]-1] = 'x';
    }

    for(int i=0; i<int(ans.size()); i++){   //size() はなんかint扱いにしてねって怒られるから今後この形がいいかも
        for(int j=0; j<int(ans[i].size()-1); j++){  //或いわ、あらがじめint len = size() で宣言しとくか？
            cout << ans[i][j] << " ";
        }
        cout << ans[i][ans[i].size()-1] << endl;
    }

}