#include <iostream>
using namespace std;

int main(void){
    int a,b,c; cin >> a >> b >> c;

    int i = 0;
    while(i*c <= b){
        if(i*c >= a){
            cout << i*c << endl;
            return 0;
        }else{
            i++;
        }
    }

    cout << -1 << endl;

    return 0;
}