#include <bits/stdc++.h>
using namespace std;

/*
multset : 順序付多重集合コンテナ、追加削除検索がO(logN)
今回の例のように、x以上のk番目に小さい値、x以下のk番目に大きい値
を取得するのが簡単である。

・宣言
multiset<key> a;
・値の参照はイテレータを用いる
itr = a.begin(); //最初の要素を指す
itr = a.end(); //最後の要素の次を指す
・追加
a.insert(x);
昇順になるように追加される
・削除
a.erase(x); //該当xを全て削除する 削除数を返す
a.erase(itr); //itrの指す要素を削除 要素の次の要素のイテレータを返す
a.erase(itr1,itr2);　//itr1からitr2までを削除する

・検索
itr = a.find(x); //xを指すイテレータを返す
itr = a.lower_bound(x);  //x以上の最初の要素のイテレータを返す
itr = a.upper_bound(x);  //xより大きい最初の要素のイテレータを返す
見つからない場合はa.end()を返す

----------
question
数列aに対するクエリqを順番に処理せよ。
・1 x :  aにxを追加する
・2 x k :aのx以下の要素で大きい方からk番目を出力する
・3 x k :aのx以上の要素で小さい方からk番目を出力する
ただし、kは5以下で、k番目が存在しない場合は-1を出力する
*/

int main(void){
    int q;  cin >> q;
    multiset<long long> a;
    for(int i=0; i<q; i++){
        int order;  cin >> order;

        if(order == 1){
            long long x;  cin >> x;
            a.insert(x);
        }else if(order == 2){
            long long x;
            int k; cin >> x >> k;
            bool flag = true; //t:k個目が存在する。 f:存在しない

            auto itr = a.upper_bound(x);
            //この時点で先頭を指す場合はx以下の要素がないことを示す。
            //でなければx以下の大きい方からi+1番目をみる。
            if(itr == a.begin()) flag = false;
            else{
                for(int i=0; i<k; i++){
                    itr--;//i+1番目
                    if(itr == a.begin() && i < k-1){
                        flag = false;
                        break;
                    }
                }
            }
            if(flag){
                cout << *itr << endl;
            }else{
                cout << -1 << endl;
            }
        }else{
            long long x;
            int k; cin >> x >> k;
            bool flag = true; //t:k個目が存在する。 f:存在しない　-1を表示

            auto itr = a.lower_bound(x);
            auto itr_end = --a.end();

            //この時点でendを指すならx以上の要素はない
            if(itr == a.end()) flag = false; 
            else{
                for(int i=0; i<k; i++){
                    if(i != 0) itr++; //i+1番目
                    if(itr == itr_end && i < k-1){
                        flag = false;
                        break;
                    }
                }
            }
            
            if(flag){
                //cout << flag << endl;
                cout << *itr << endl;
            }else{
                //cout << flag << endl;
                cout << "-1" << endl;
            }
        }
    }
}