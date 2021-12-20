#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n;  cin >> n;
    string ans;

    if(n >= 42) n++;

    if(n < 10){
        ans = "00"+to_string(n);
    }else if(n < 100){
        ans = "0"+to_string(n);
    }else{
        ans = to_string(n);
    }

    cout << "AGC"+ans << endl;
}