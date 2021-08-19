#include <iostream>
//#include <bits/stdc++.h>
#include <string>
using namespace std;
 
int main() {
    string str = "Hello";   //string 
    int n;
    cin >> n;
    getline(cin, str);      //getline 1行目を無駄撃ち

    string str_2[n];        //string 2次元
    for(int i=0; i<n; i++){
        getline(cin, str_2[i]);
    }
    
    str[0] = 'M'; // char型の'M'
    cout << str << endl; // Mello
    str_2[0][1] = 'D';  //char
    
    if (str[1] == 'e') {
        cout << "AtCoder" << endl;
    }
    if(str_2[0][0] == 'a'){
        cout << str_2[0] << " size = ";
        cout << str_2[0].size() << endl;
    }
    return 0;
}