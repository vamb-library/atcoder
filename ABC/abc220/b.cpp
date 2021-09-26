#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int main(void){
    int k;  cin >> k;
    string a,b; cin >> a >> b;
    long long a_10 = 0, b_10 = 0;
    int num;

    if(k != 10){
        int len = a.size();
        for(int i=0; i<len-1; i++){
            num = a[i] - '0';
            //cout << num << endl;
            a_10 += pow(double(k), double(len-1-i))*num;
        }
        a_10 += a[len-1] - '0';

        len = b.size();
        for(int i=0; i<len-1; i++){
            num = b[i] - '0';
            b_10 += pow(double(k), double(len-1-i))*num;
        }    
        b_10 += b[len-1] - '0';

    }else{
        a_10 = atoi(a.c_str());
        b_10 = atoi(b.c_str());
    }
    //cout << a_10 << b_10 << endl;

    cout << a_10*b_10 << endl;

    return 0;
}