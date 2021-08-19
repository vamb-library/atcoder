#include <iostream>
using namespace std;

int main(void){
    int n,a, x, y;

    cin >> n >> a >> x >> y;

    if(n>a){
        cout << (x*a)+(n-a)*y << endl;
    }else{
        cout << x*n << endl;
    }

    return 0;
}