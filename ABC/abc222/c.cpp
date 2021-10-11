#include <iostream>
#include <vector>
using namespace std;

//map 関数を上手く使えるようになりたい。かな

int main(void){
    int n,m; cin >> n >> m;
    int num = 2*n;
    vector<string> a(num);
    vector<int> wins(num, 0);
    vector<int> ans(num);  //順位
    vector<int> rank(num); //一時的順位

    char red, blue;

    for(int i=0; i<num; i++){
        cin >> a[i];
        ans[i] = i;
    }

    //iラウンド目
    for(int i=0; i<m; i++){
        //組み合わせ同士で試合
        for(int k=0; k<n; k++){
            //赤コーナ ans[2*k+1] さん の出す手
            red = a[ans[2*k+1]][i];
            //青コーナ ans[2*k] さんの出す手
            blue = a[ans[2*k]][i];
            
            switch(red){
                case 'G':
                    if(blue == 'P') wins[2*k]++;
                    else if(blue == 'C') wins[2*k+1]++;
                    break;
                
                case 'C':
                    if(blue == 'G') wins[2*k]++;
                    else if(blue == 'P') wins[2*k+1]++;
                    break;
                
                case 'P':
                    if(blue == 'C') wins[2*k]++;
                    else if(blue == 'G') wins[2*k+1]++;
                    break;
            }
        }

        //順位を更新
        /*for(int j=i+1; i>=0; j--){
            for(int k=0; k<2*n; k++){
                if(wins[k] == j){
                    rank.push_back(k);
                }
            }
        }*/
        //ans = rank;
    }

    for(int i=0; i<2*n; i++){
        cout << ans[i]+1 << endl;
    }

    return 0;
}