#include <bits/stdc++.h>
using namespace std;

int main(void){
    int s,t,x; cin >> s >> t >> x;
    string flag = "No";

    if(s<t){
        if(s<=x && x<t){
            flag = "Yes";
        }
    }else{
        if((s<=x && x<24) || (0<=x && x<t)){
            flag = "Yes";
        }
    }

    cout << flag << endl;

}