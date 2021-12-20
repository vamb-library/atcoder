#include <bits/stdc++.h>
using namespace std;

int main(void){
    string s;   cin >> s;
    string ans = "Yes";
    char c1 = s[1];
    char c2 = s[0];
    int len = s.size();
    
    int end = 0;
    if(len == 1)    ans = "Yes";
    else if(len == 2){
        if(s == "oo")   ans = "No";
    }else{
        if(c1 == 'o' && c2 == 'o')  ans = "No";
        else{
            for(int i=2; i<len; i++){
                switch(s[i]){
                    case 'o':
                        if(c1 == 'x'){
                            if(c2 == 'x'){
                                c1 = 'o';
                                c2 = 'x';
                            }else{
                                ans = "No";
                                end = 1;
                            }
                        }else{
                            ans = "No";
                            end = 1;
                        }
                        break;
                    
                    case 'x':
                        if(c1 == 'x'){
                            if(c2 == 'x'){
                                ans = "No";
                                end = 1;
                            }else{
                                c1 = 'x';
                                c2 = 'x';
                            }
                        }else{
                            c1 = 'x';
                            c2 = 'o';
                        }
                        break;
                }
                if(end == 1)    break;
            }
        }
        
    }
    cout << ans << endl;
}