#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n;  cin >> n;
    map<int, int> a;
    for(int i=0; i<4*n-1; i++){
        int index;  cin >> index;
        index--;
        if(a[index] == 0){
            a[index] = 1;
        }else{
            a[index]++;
        }
    }
    int ans;
    for(int i=0; i<n; i++){
        if(a[i] < 4){
            ans = i+1;
            break;
        }
    }
    cout << ans << endl;
}