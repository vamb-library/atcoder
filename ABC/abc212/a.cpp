#include <iostream>
using namespace std;

int main(void){
    int a,b;

    cin >> a >> b;

    if(a == 0){
        cout << "Silver" << endl;
    }else if(b == 0){
        cout << "Gold" << endl;
    }else{
        cout << "Alloy" << endl;
    }

    return 0;
}