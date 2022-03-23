#include <bits/stdc++.h>
using namespace std;

int main(void){
    vector<int> a(10);
    for(int& x : a){
        cin >> x;
    }
    int index = 0;
    for(int i=0; i<3; i++){
        index = a[index];
    }
    cout << index << endl;
}