#include <iostream>
using namespace std;

int main(void){
    int n; cin >> n;
    string s; cin >> s;
    int f = 0; //最初0 N見つけてら1 1の状態でAがきたら2 
    int cnt = 0; //f=2 でNが来たら＋1

    for(int i=0; i<n; i++){
        if(f == 0){
            if(s[i] == 'N'){
                f = 1;
            }else{
                f = 0;
            }
        //cout << "f = " << f << endl;

        }else if(f == 1){
            if(s[i] == 'N'){
                f = 1;
            }else{
                f = 2;
            }
        }else if(f == 2){
            if(s[i] == 'N'){
                cnt++;
                f = 1;
            }
        }
    }

    cout << cnt << endl;

    return 0;
}