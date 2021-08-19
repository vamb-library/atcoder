#include <iostream>
using namespace std;

int main(void){
    string s,t;
    bool f = false;
    cin >> s;

    for(int i=0; i<s.size(); i++){
        if(s[i] == 'R'){
            if(f == false)   f = true;
            else            f = false;
        }
        else{
            if(f == false){
                if(t[t.size()-1] == s[i])
                    t.pop_back();
                else
                    t += s[i];
            }else{
                if(t[0] == s[i])
                    t.erase(t.begin());
                else
                    t = s[i] + t;
            }
        }
    }

    if(f == false)
        cout << t << endl;
    else{
        string str;
        for(int i=0; i<t.size(); i++){
            str += t[t.size()-1-i];
        }
        cout << str << endl;
    }

    return 0;
}