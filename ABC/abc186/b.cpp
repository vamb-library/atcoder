#include <iostream>
using namespace std;

int main(void){
    int h,w;
    int min = 100, cnt = 0;
    cin >> h >> w;

    int a[h][w];
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            cin >> a[i][j];
            if(a[i][j] < min)   min = a[i][j];
        }
    }
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            cnt += (a[i][j] - min);
        }
    }

    cout << cnt << endl;

    return 0;
}