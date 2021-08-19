#include <iostream>
using namespace std;

int main(void){
    string s,ans;
    cin >> s;

    for(int i=s.size()-1; i>=0; i--){
        if(s[i] == '6'){
            ans += '9';
        }else if(s[i] == '9'){
            ans += '6';
        }else{
            ans += s[i];
        }
    }
    
    cout << ans << endl;

    return 0;
}