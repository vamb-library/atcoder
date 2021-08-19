#include <iostream>
#include <vector>
using namespace std;

int main(void){
    int q;
    cin >> q;

    int od[q], x[q];
    vector<int> in;
    int add = 0, min, min_index;
    for(int i=0; i<q; i++){
        cin >> od[i] >> x[i];
    }
    min = x[0];

    for(int i=0; i<q; i++){
        switch(od[i]){
            case 1:
                in.push_back(x[i]);
                if(x[i] < min){
                    min = x[i];
                }
                break;
            
            case 2:
                add += x[i];
                break;

            case 3:
                break;
            
            default:
                break;
        }
    }


    return 0;
}