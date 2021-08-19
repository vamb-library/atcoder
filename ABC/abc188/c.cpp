#include <iostream>
#include <math.h>
using namespace std;

int main(void){
    int n,num,i,j;
    cin >> n;

    num = pow(2,n);
    int p_rate[num], p_index[num];
    int second_rate;

    for(i=0; i<num; i++){
        cin >> p_rate[i];
        p_index[i] = p_rate[i];
    }

    for(i=n; i>1; i--){
        for(j=0; j<pow(2,i)/2; j++){
            p_rate[j] = max(p_rate[2*j], p_rate[2*j+1]);
        }
    }

    second_rate = min(p_rate[0],p_rate[1]);
    for(i=0; i<num; i++){
        if(second_rate == p_index[i]){
            cout << i+1 << endl;
            return 0;
        }
    }

    return 1;
}