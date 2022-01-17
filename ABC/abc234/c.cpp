#include <bits/stdc++.h>
#include <sstream>
using namespace std;

int main(void){
    long long k;  cin >> k;
    long long ans = k;
    string binary;
    long long base = 1;

    while (ans>0){
        int bin = (ans%2);
        string str = to_string(bin);
        binary = str[0] + binary;
        ans /= 2;
    }
    int len = binary.size();
    for(int i=0; i<len; i++){
        if(binary[i] == '1'){
            binary[i] = '2';
        }
    }

    cout << binary << endl;
}