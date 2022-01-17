#include <bits/stdc++.h>
using namespace std;

int func(int x);

int main(void){
    int t;  cin >> t;
    cout << func(func(func(t)+t)+func(func(t))) << endl;
}

int func(int x){
    int ans;
    ans = pow(x,2) + 2*x + 3;
    return ans;
}