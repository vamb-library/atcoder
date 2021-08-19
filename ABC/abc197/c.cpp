#include <iostream>
using namespace std;

int main(void){
    int n,div;
    int i,j;
    cin >> n;
    int bit[n][30] = {{}};

    int a[n];
    for(i=0; i<n; i++){
        cin >> a[i];
    }

    for(i=0; i<n; i++){
        div = a[i];
        j = 30-1;
        while(div != 0){
            if(div%2 == 0){
                bit[i][j] = 0;
            }else{
                bit[i][j] = 1;
            }
            div /= 2;
            j--;
        }
        //for(j=0; j<30; j++){
        //    cout << bit[i][j];
        //}
        //cout << endl;
        
    }
    
    return 0;
}