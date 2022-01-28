#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n;  cin >> n;
    vector<pair<int,int>> p(n);
    for(int i=0; i<n; i++){
        int a,b;
        cin >> a >> b;
        p[i] = make_pair(b,a);
    }
    sort(p.begin(),p.end());

    for(int i=0; i<n; i++){
        cout << p[i].second << " " << p[i].first << endl;
    }
}