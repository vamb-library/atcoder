#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n,x;    cin >> n >> x;
    int cnt = 0;
    int a[n];
    int know[n] = {};
    
    for (int i=0; i<n; i++){
        cin >> a[i];
    }

    int j = x-1;
    while (know[j] == 0){
        know[j] = 1;
        cnt++;
        j = a[j]-1;
    }
    
    cout << cnt << endl;

}