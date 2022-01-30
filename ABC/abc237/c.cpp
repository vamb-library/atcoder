#include <bits/stdc++.h>
using namespace std;

int main(void){
    string str; cin >> str;
    string ans = "Yes";
    int last = str.size();
    int k = 0, t = 0;

    while(str[last-1] == 'a' && 0 < last){
        str.pop_back();
        t++;
        last = str.size();
    }

    if(0 < last){
        while(str[k] == 'a' && k < t){
            k++;
        }   
    }

    if(k != last-1){
        int har = (last-k)/2;
        for(int i=0; i<har; i++){
            if(str[i+k] != str[last-1-i]){
                ans = "No";
                break;
            }
        }
    }

    cout << ans << endl;

}