#include <iostream>
using namespace std;

int main(void){
    int n, inx = 0;
    cin >> n;
    char s[n];
    for(int i=0; i<n; i++){
        cin >> s[i];
    }
    for(int i=0; i<n; i++){
        if(s[i] == '1'){
            inx = i;
            break;
        }
    }


    if(inx%2 == 0){
        cout << "Takahashi" << endl;
    }else{
        cout << "Aoki" << endl;
    }

    return 0;
}