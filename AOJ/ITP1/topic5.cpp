#include <iostream>
using namespace std;

//A
/*
int main(){
    int x,y;
    while(true){
        cin >> x >> y;
        if(x == 0 && y == 0)    break;

        for(int i=0; i<x; i++){
            for(int j=0; j<y; j++){
                cout << "#";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
*/
//B
/*
int main(){
    int h, w;
    while(true){
        cin >> h >> w;
        if(h == 0 && w == 0)    break;

        for(int i=0; i<h; i++){
            for(int j=0; j<w; j++){
                if(i==0 || i==h-1 || j==0 || j==w-1)
                    cout << "#";
                else
                    cout << ".";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}*/

//C
/*
int main(void){
    int h,w;
    while(true){
        cin >> h >> w;
        if(h == 0 && w == 0)    break;
        
        for(int i=0; i<h; i++){
            for(int j=0; j<w; j++){
                if(i%2 == 0){
                    if(j%2 == 0)
                        cout << "#";
                    else
                        cout << ".";
                }else{
                    if(j%2 == 0)
                        cout << ".";
                    else
                        cout << "#";
                }
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
*/
//D
int main(void){
    int n,x;
    cin >> n;

    for(int i=1; i<=n; i++){
        if(i%3 == 0){
            cout << " " << i;
        }else{
            x=i;
            while(x){
                //cout << "(" << x << ")";
                if(x%10 == 3){
                    cout << " " << i;
                    break;
                }
                x /= 10;
                //cout << "(" << x << ")";
            }
        }
    }
        
    cout << endl;

    return 0;
}