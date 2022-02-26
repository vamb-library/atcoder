#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n;  cin >> n;
    vector<int> a(n);
    map<int,int> cnt;
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(cnt[a[i]] != 0){
            cnt[a[i]]++;
        }else{
            cnt[a[i]] = 1;
        }
    }
    cout << cnt.size() << endl;
}