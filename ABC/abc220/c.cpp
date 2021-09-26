#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n;  cin >> n;
    vector<long long> a(n);
    long long total = 0;
    for(int i=0; i<n; i++){
        cin >> a[i];
        total += a[i];
    }
    long long x; cin >> x;

    int i = 0;
    long long k = 0;
    long long ans = 0;

    /*while(ans+total >= x){
        ans += total;
        k += n;
    }*/
    long long p = x/total;
    ans = p*total;
    k = p*n;

    while(ans <= x){
        ans += a[i];
        k++;
        i++;
        if(i >= n){
            i = 0;
        }
    }

    cout << k << endl;

    return 0;
}