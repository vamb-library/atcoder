#include <bits/stdc++.h>
using namespace std;

// pair/tuple ... 複数の値の組みを作る
int main(void){
    pair<string, int> p("abc", 3);
    cout << p.first << endl;    //　abc
    p.first = "hello";
    cout << p.first << p.second << endl;    // hello3

    pair<string, int> dec;
    dec = make_pair("decomport", 2);
    string str;
    int i;

    tie(str,i) = p; //  p.first -> str , p.second -> i
    cout << str << i << endl;   // decomport2

    vector<pair<int,int>> vec_pair(3);
    for(int i=0; i<3; i++){
        vec_pair[i] = make_pair(i,i*10);
        cout << vec_pair[i].first << " " << vec_pair[i].second << endl;
    }
}