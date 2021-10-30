#define _GLIBCXX_DEBUG  //vector の要素を超えて参照したときのエラーメッセージを表示
#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n; cin >> n;    //頂点の個数
    vector<int> a(n-1),b(n-1); //頂点a,bを結ぶ辺
    int top;    //スターの核
    bool flag = true;
    for(int i=0; i<n-1; i++){
        cin >> a[i] >> b[i];
    }
    if(a[0] == a[1] || a[0] == b[1]){
        top = a[0];
    }else if(b[0] == a[1] || b[0] == b[1]){
        top = b[0];
    }else{
        flag = false;
    }

    if(flag != false){
        for(int i=2; i<n-1; i++){
            if(a[i] != top && b[i] != top){
                flag = false;
                break;
            }
        }
    }

    if(flag == true){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

}