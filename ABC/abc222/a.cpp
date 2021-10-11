#include <iostream>
using namespace std;

int main(void){
    string n; cin >> n;

    int len = n.size();

    if(len < 4){
        for(int i=0; i<4-len; i++){
            cout << "0";
        }
    }

    cout << n << endl;

    return 0;
}