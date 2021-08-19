#include <iostream>
using namespace std;

int main(void){
    int n,in;
    bool flag = true;
    cin >> n;

    int a[n] = {};

    for(int i=0; i<n; i++){
        cin >> in;
        if(a[in-1] == 0){
            a[in-1] = 1;
        }else{
            flag = false;
        }
    }
    if(flag == true){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}