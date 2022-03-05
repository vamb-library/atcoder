#include <bits/stdc++.h>
using namespace std;

// 基本的にO(N logN)の比較で範囲をソートする。
// 範囲の指定はイテレータで行う。
int main(void){
    vector<int> a = {3, 1, 3, 4, 5};
    int len_a = a.size();

    cout << "a = {"; 
    for(int x : a){
        cout << x;
        if(x != a[len_a-1])   cout << ", ";
        else                  cout << "}" << endl;
    }

    //イテレータの確認
    auto itr = a.begin();
    cout << "a.begin() = " << *itr;
    itr = a.end();
    cout << " : a.end() = " << *itr << endl;

    //昇順にソート
    sort(a.begin(), a.end());

    cout << "a = {"; 
    for(int x : a){
        cout << x;
        if(x != a[len_a-1]) cout << ", ";
        else                cout << "}" << endl;
    } 


    //
    //同様にしてdouble型で
    vector<double> b = {3.1, 3.7, 1.2, 3.5, 4.3};
    int len_b = b.size();

    cout << "b = {"; 
    for(double x : b){
        cout << x;
        if(x != b[len_b-1])   cout << ", ";
        else                  cout << "}" << endl;
    }

    //降順にソート
    sort(b.begin(), b.end(), greater<double>());

    cout << "b = {"; 
    for(double x : b){
        cout << x;
        if(x != b[len_b-1])   cout << ", ";
        else                  cout << "}" << endl;
    }
}