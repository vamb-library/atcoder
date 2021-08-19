#include <iostream>
using namespace std;

int main(void){
    int n, w;
    int cnt = 0;

    cin >> n >> w;
    while((w*(cnt+1)) <= n){
        cnt++;
    }
    cout << cnt << endl;

    return 0;
}