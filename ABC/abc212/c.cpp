#include <iostream>
using namespace std;

int main(void){
    int n,m;
    cin >> n >> m;

    int a[n],b[m];
    int max_a, max_b, min_a, min_b;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int j=0; j<m; j++){
        cin >> b[j];
    }

    max_a = a[0];
    max_b = b[0];
    min_a = a[n-1];
    min_b = b[m-1];
    for(int i=0; i<n; i++){
        if(a[i] > max_a){
            max_a = a[i];
        }else if(a[i] < min_a){
            min_a = a[i];
        }
    }
    for(int j=0; j<m; j++){
        if(b[j] > max_b){
            max_b = b[j];
        }else if(b[j] < min_b){
            min_b = b[j];
        }
    }

    return 0;
}