#include <iostream>
using namespace std;

int main(void){
    int n,i;
    int sum = 0;
    cin >> n;

    int a[n], b[n];
    for(i=0; i<n; i++){
        cin >> a[i];
    }
    for(i=0; i<n; i++){
        cin >> b[i];
    }

    for(i=0; i<n; i++){
        sum += a[i]*b[i];
    }
    if(sum == 0){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}