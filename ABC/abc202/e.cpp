#include <iostream>
using namespace std;

int main(void){
    int n;  //頂点の個数
    cin >> n;
    int p[n]; //頂点iの親はp[i]  i:0~n-1
    for(int i=1; i<n; i++){
        cin >> p[i];
        p[i]--;
    }
    int q;  //クエリの個数
    cin >> q;
    int u[q], d[q]; //  根からの深さdの頂点xから根に
                    //  かけてu[]が存在する
    for(int i=0; i<q; i++){
        cin >> u[i] >> d[i];
    }

    cout << " " << endl;

    return 0;
}