#include <bits/stdc++.h>
using namespace std;

int main(void){
    long long n = pow(2,20);
    int qu; cin >> qu;
    int t; long long x,h;
    vector<long long> a(n,-1), nono(n,0);
    for (int i=0; i<qu; i++){
        cin >> t >> x;
        if(t == 1){
            h = x;
            if(a[h%n] != -1){
                h += nono[h%n];
                nono[x%n]++;
            }
            a[h%n] = x;
            nono[h%n]++;
        }else if(t == 2){
            cout << a[x%n] << endl;
        }
    }

}