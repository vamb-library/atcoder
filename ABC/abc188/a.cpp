#include <iostream>
using namespace std;

int main(void){
    int x,y;
    cin >> x >> y;

    if(abs(x-y) < 3)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    
    return 0;
}