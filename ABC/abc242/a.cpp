#include <bits/stdc++.h>
using namespace std;

int main(void){
    int a,b,c,x;    cin >> a >> b >> c >> x;
    double ans;
    
    if(x <= a){
        ans = 1.0;
    }else if(x <= b){
        int num = b-a;
        ans = double(c)/double(num);
    }else{
        ans = 0.0;
    }
    cout << fixed << setprecision(10);
    cout << ans << endl;
    
}