#define _GLIBCXX_DEBUG  //vector の要素を超えて参照したときのエラーメッセージを表示
#include <bits/stdc++.h>
using namespace std;

int main(void){
    vector<char> str(3);
    int cnt = 0;
    for(int i=0; i<3; i++){
        cin >> str[i];
    }
    if( (str[0] == str[1])||
        (str[1] == str[2])||
        (str[2] == str[0]) )    cnt++;
    if(str[0] == str[1] && str[1] == str[2])    cnt++;

    switch (cnt){
    case 0:
        cout << 6 << endl;
        break;
    case 1:
        cout << 3 << endl;
        break;
    case 2:
        cout << 1 << endl;
        break;

    default:
        break;
    }

}