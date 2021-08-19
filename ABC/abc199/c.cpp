#include <iostream>
#include <string>
using namespace std;
 
int main(void){
    int n,q;
    string s, d, sub;
    char tmp;
    bool f = false;

    cin >> n >> s >> q;

    int t,a,b;
    for(int i=0; i<q; i++){
        cin >> t >> a >> b;

        switch(t){
            case 1:
            //t=tureならa+n文字目と
            //b-n文字目を入れ替える
                if(f==true && (a<=n && b>n)){
                    tmp = s[a+n-1];
                    s[a+n-1] = s[b-n-1];
                    s[b-n-1] = tmp;
                }else{
                    tmp = s[a-1];
                    s[a-1] = s[b-1];
                    s[b-1] = tmp;
                }
                break;
            
            case 2:
                //入れ替えるのではなく、
                //入れ替わっているかどうか
                //だけを示す必要がある
                if(f == true)    f = false;
                else            f = true;

                //d = s.substr(n,n) + s.substr(0,n);
                //s.erase(s.begin(), s.begin()+n);
                //s += sub;
                //s = d;
                break;
            
            default:
                cout << "Error input" << endl;
                return -1;
        }
    }
    if(f == true){
        sub = s.substr(n,n)+s.substr(0,n);
        cout << sub << endl;
    }else
        cout << s << endl;

    return 0;
}