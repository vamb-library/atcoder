#include <bits/stdc++.h>
using namespace std;

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

            auto itr = a.upper_bound(x); //x より大きい最初のイテレタ
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