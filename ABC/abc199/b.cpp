#include <iostream>
using namespace std;

int main(void){
    int n;
    cin >> n;

    int a[n], b[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        cin >> b[i];
    }

    int max = a[0], min = b[0];
    //int min = b[0] - a[0];

    for(int i=1; i<n; i++){
        if(a[i] >= max){
            max = a[i];
        }
        if(b[i] <= min){
            min = b[i];
        }
        if(max > min){
            cout << 0 << endl;
            return 0;
        }
    }
    /*
    for(int i=1; i<n; i++){
        if(b[i]-a[i] < min)
            min = b[i]-a[i];
    }*/
    cout << min-max+1 << endl;

    return 0;
}