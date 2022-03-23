#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n,m;    cin >> n >> m;
    vector<int> a(n), b(m);
    int flag = 1;   // -1 : 存在する、 1 : 存在しない
    string ans = "Yes";
    for(int& x : a){
        cin >> x;
    }
    for(int& x : b){
        cin >> x;
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(b[i] == a[j]){
                a[j] = -1;
                flag = -1;
                break;
            }else{
                flag = 1;
            }
        }
        if(flag == 1){
            ans = "No";
            break;
        }
    }

    cout << ans << endl;

}