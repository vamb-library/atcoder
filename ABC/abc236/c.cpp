#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n,m;    cin >> n >> m;
    vector<string> station(n),main_station(m);
    for(int i=0; i<n; i++){
        cin >> station[i];
    }
    for(int i=0; i<m; i++){
        cin >> main_station[i];
    }

    int j = 0;
    for(int i=0; i<n; i++){
        if(station[i] == main_station[j]){
            cout << "Yes" << endl;
            j++;
        }else{
            cout << "No" << endl;
        }
    }

}