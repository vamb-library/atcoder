#include <iostream>
using namespace std;

int main(void){
    int n;
    cin >> n;
    int a[n], cnt = 0;
    bool f = true;

    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i]%2 != 0) f = false;
    }
    while(f){
        cnt++;
        for(int i=0; i<n; i++){
            a[i] /= 2;
            if(a[i]%2 != 0) f = false;
        }
    }
    cout << cnt << endl;

    return 0;
}