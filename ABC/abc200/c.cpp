#include <iostream>
using namespace std;

int main(void){
    int n;
    long cnt = 0;   //最大で(2*10^5+1)*(2*10^5/2) 個
    cin >> n;
    int a[n], ans[200] = {};

    for(int i=0; i<n; i++){
        cin >> a[i];
        if(ans[a[i]%200] != 0){
            cnt += ans[a[i]%200];
            ++ans[a[i]%200];
        }
        else{
            ++ans[a[i]%200];
        }
    }
    /*
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(abs(a[i]-a[j])%200 == 0) cnt++;
        }
    }*/
    cout << cnt << endl;

    return 0;
}