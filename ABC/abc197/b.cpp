#include <iostream>
#include <string>
using namespace std;

int main(void){
    int h,w,x,y;
    int i,j;
    int count = 1;

    cin >> h >> w >> x >> y;
    
    string in[h];
    string str[h];

    for(i=0; i<h; i++){
        cin >> str[i];
        //for(j=0; j<w; j++){
        //    str[i][j] = in[i][j];
        //}
    }
    /*for(i=0; i<h; i++){
        for(j=0; j<w; j++){
            cout << str[i][j];
        }
        cout << endl;
    }*/

    j = y-2;
    while(j>=0 && str[x-1][j] == '.'){
        count += 1;
        j--;
    }
    j = y;
    while(j<w && str[x-1][j] == '.'){
        count += 1;
        j++;
    }

    i = x-2;
    while(i>=0 && str[i][y-1] == '.'){
        count += 1;
        i--;
    }
    i = x;
    while(i<h && str[i][y-1] == '.'){
        count += 1;
        i++;
    }
    
    cout << count << endl;

    return 0;
}