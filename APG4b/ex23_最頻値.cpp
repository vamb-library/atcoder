#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n;  cin >> n;
    map<int,int> cnt;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        if(cnt.count(a)){
            cnt[a]++;
        }else{
            cnt[a] = 1;
        }
    }

    int max_key = 0, max_val = 0;
    for(pair<int,int> p : cnt){
        int key = p.first;
        int val = p.second;
        
        if(max_val < val){
            max_val = val;
            max_key = key;
        }
    }
    cout << max_key << " " << max_val << endl;
}