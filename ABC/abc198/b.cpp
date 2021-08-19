#include <iostream>
#include <string>
using namespace std;

int main(void){
    string n;
    int f = 1;

    cin >> n;
    int origin_length = n.size();

    for(int i=0; i<origin_length; i++){
        f = 1;
        for(int j=0; j<n.size()/2; j++){
            if(n[j] != n[n.size()-1-j]){
                f = -1;
                break;
            }
        }
        if(f == 1){
            break;
        }else{
            n.insert(n.begin(), '0');
        }
    }
    if(f == 1){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}