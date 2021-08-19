#include <iostream>
//#include <atcoder/all>
using namespace std;

int main(void){
    int a,b,c, x;
    int ans, cnt = 0;
    cin >> a >> b >> c >> x;

    for(int i=0; i<=a; i++){
        for(int j=0; j<=b; j++){
            for(int k=0; k<=c; k++){
                ans = 500*i + 100*j + 50*k;
                if(ans == x){
                    cnt++;
                }
            }
        }
    }

    cout << cnt << endl;

    return 0;
}