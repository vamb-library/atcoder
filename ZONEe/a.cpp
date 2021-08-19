#include <iostream>
using namespace std;

int main(void){
    string s, str;
    int cnt = 0;

    cin >> s;
    for(int i=0; i<12-3; i++){
        str = s.substr(i,4);
        if(str == "ZONe"){
            cnt++;
            i += 3;
        }
    }

    cout << cnt << endl;

    return 0;
}