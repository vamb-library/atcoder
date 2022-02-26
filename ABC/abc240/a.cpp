#include <bits/stdc++.h>
using namespace std;

int main(void){
    int a,b;    cin >> a >> b;
    string ans;
    if(a == 1){
        if(b == 10) b = 0;
    }else if(a == 10){
        if(b == 1) a = 0;
    }
    if(a == b+1 || a == b-1){
        ans = "Yes";
    }else{
        ans = "No";
    }
    cout << ans << endl;

}