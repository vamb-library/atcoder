#include <iostream>
using namespace std;

int main(void){
    int n;
    cin >> n;

    int a[n], b[n], c[n];
    int box[n] = {};
    long cnt = 0;

    for(int i=0; i<n; i++){
        cin >> a[i];
        box[a[i]-1]++;
    }
    for(int i=0; i<n; i++){
        cin >> b[i];
    }    
    for(int i=0; i<n; i++){
        cin >> c[i];
    }

    for(int j=0; j<n; j++){
        cnt += box[b[c[j]-1]-1];
    }

    cout << cnt << endl;

    return 0;
}