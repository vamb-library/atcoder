#include <iostream>
using namespace std;

int main(void){
    int k;
    long n;
    cin >> n >> k;

    for(int i=0; i<k; i++){
        if(n%200 == 0){
            n /= 200;
        }else{
            n *= 1000;
            n += 200; 
        }
    }
    cout << n << endl;

    return 0;
}