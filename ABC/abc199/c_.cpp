#include <iostream>
#include <string>
using namespace std;
 
int main(void){
    int n,q;
    string s, sub;
    char tmp;

    cin >> n >> s >> q;

    int t,a,b;
    for(int i=0; i<q; i++){
        cin >> t >> a >> b;

        switch(t){
            case 1:
                tmp = s[a-1];
                s[a-1] = s[b-1];
                s[b-1] = tmp;
                break;
            
            case 2:
                sub = s.substr(0, n);
                //s.erase(s.begin(), s.begin()+n);
                //s += sub;
                s.replace(0,n,s.substr(n,n));
                s.replace(n,n,sub);
                break;
            
            default:
                cout << "Error input" << endl;
                return -1;
        }
    }

    cout << s << endl;

    return 0;
}