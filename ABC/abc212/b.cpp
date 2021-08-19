#include <iostream>
#include <math.h>
using namespace std;

int main(void){
    int n = 4;
    int a,abd;
    int x[n];
    bool flag = false;

    cin >> a;
    for(int i=0; i<n; i++){
        abd = a/pow(10,i);
        x[n-1-i] = abd%10;
    }

    if(x[0] == x[1] && x[0] == x[2] && x[0] == x[3]){
        flag = true;
    }else{
        for(int i=0; i<n-1; i++){
            if(x[i] != 9){
                if(x[i+1] == x[i]+1)    flag = true;
                else                    flag = false;
            }else{
                if(x[i+1] == 0)         flag = true;
                else                    flag = false;
            }
            if(flag == false)   break;
        }
    }


    
    if(flag == true){
        cout << "Weak" << endl;
    }else{
        cout << "Strong" << endl;
    }

    return 0;
}