#include <iostream>
#include <vector>
using namespace std;

int main(void){
    int n,p; cin >> n >> p;
    vector<int> a(n);
    int cnt = 0;

    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i] < p){
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}