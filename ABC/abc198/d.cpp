#include <iostream>
#include <string>
using namespace std;

int main(void){
    string s[3],n[3];
    int max_size = 0;

    for(int i=0; i<3; i++){
        getline(cin, s[i]);
        if(s[i].size() > max_size)
            max_size = s[i].size();
    }
    int num[3][max_size] = {{{}}};

    for(int i=0; i<3; i++){
        
        num[i][0]++;
        n[i] += to_string(num[i][0]);
        for(int j=1; j<s[i].size(); j++){
            n[i] += to_string(num[i][j]);
            num[i][j]++;
        }
    }

    if(true){
        for(int i=0; i<3; i++){
            cout << n[i] << endl;
        }
    }else{
        cout << "UNSOLVABLE" << endl;
    }

    return 0;
}