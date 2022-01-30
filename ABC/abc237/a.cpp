#include <bits/stdc++.h>
using namespace std;

int main(void){
    long long n;    cin >> n;
    string ans = "No";
    if(-pow(2,31) <= n && n < pow(2,31)){
        ans = "Yes";
    }
    cout << ans << endl;

}