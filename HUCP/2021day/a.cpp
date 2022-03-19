#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n,m;    cin >> m >> n;
    vector<string> s(m);
    for(int i=0; i<m; i++){
        cin >> s[i];
    }
    int cost, cost_o,cost_x;
    int cost_o_fir,cost_x_fir,cost_o_sec,cost_x_sec;
    int cost_min = 2147483647;
    
    for(int k=0; k<n-1; k++){
        cost_o = 0;
        cost_x = 0;
        //インデックスiの右に線
        for(int i=0; i<m; i++){
            for(int j=0; j<k+1; j++){
                if(s[i][j] == 'o'){
                    cost_o++;
                }else{
                    cost_x++;
                }
            }
        }
        cost_o_fir = cost_o;
        cost_x_fir = cost_x;

        cost_o = 0;
        cost_x = 0;
        for(int i=0; i<m; i++){
            for(int j=k+1; j<n; j++){
                if(s[i][j] == 'o'){
                    cost_o++;
                }else{
                    cost_x++;
                }
            }
        }
        cost_o_sec = cost_o;
        cost_x_sec = cost_x;

        if((cost_o_fir+cost_x_sec) < (cost_x_fir+cost_o_sec)){
            cost = cost_o_fir+cost_x_sec;
        }else{
            cost = cost_x_fir+cost_o_sec;
        }
        cost_min = min(cost,cost_min);
    }

    for(int k=0; k<m-1; k++){
        cost_o = 0;
        cost_x = 0;
        //インデックスkのしたに線
        for(int i=0; i<k+1; i++){
            for(int j=0; j<n; j++){
                if(s[i][j] == 'o'){
                    cost_o++;
                }else{
                    cost_x++;
                }
            }
        }
        cost_o_fir = cost_o;
        cost_x_fir = cost_x;

        cost_o = 0;
        cost_x = 0;
        for(int i=k+1; i<m; i++){
            for(int j=0; j<n; j++){
                if(s[i][j] == 'o'){
                    cost_o++;
                }else{
                    cost_x++;
                }
            }
        }
        cost_o_sec = cost_o;
        cost_x_sec = cost_x;

        if((cost_o_fir+cost_x_sec) < (cost_x_fir+cost_o_sec)){
            cost = cost_o_fir+cost_x_sec;
        }else{
            cost = cost_x_fir+cost_o_sec;
        }
        cost_min = min(cost,cost_min);
    }
    cout << cost_min << endl;
}