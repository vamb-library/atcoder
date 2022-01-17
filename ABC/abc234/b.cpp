#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n;  cin >> n;
    vector<int> x(n), y(n);
    for(int i=0; i<n; i++){
        cin >> x[i] >> y[i];
    }

    double dis,max_dis=0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            dis = sqrt(pow(x[i]-x[j],2) + pow(y[i]-y[j],2));
            max_dis = max(max_dis,dis);
        }
    }
    cout << fixed << setprecision(6);
    cout << max_dis << endl;
}