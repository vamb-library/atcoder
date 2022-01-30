#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n;  cin >> n;
    string s;   cin >> s;
    vector<int> left,right;
    left.push_back(0);
    for(int i=1; i<n+1; i++){
        if(s[i-1] == 'L'){
            int l_sz = left.size();
            right.push_back(left[l_sz-1]);
            left.pop_back();
            left.push_back(i);
        }else{
            left.push_back(i);
        }
    }

    int r_sz = right.size();
    if(r_sz != 0){
        for( int x : left){
            cout << x << " ";
        }
        for(int i = r_sz-1; i>0; i--){
            cout << right[i] << " ";
        }
        cout << right[0] << endl;
    }else{
        int l_sz = left.size();
        for(int i=0; i<l_sz-1; i++){
            cout << left[i] << " ";
        }
        cout << left[l_sz-1] << endl;
    }

}