#include <bits/stdc++.h>
using namespace std;

void scored(vector<vector<int>> &ans, int &correct_cnt, int &wrong_cnt);

void result(vector<vector<int>> ans, int correct_cnt, int wrong_cnt);

int main(void){
    vector<vector<int>> ans(9, vector<int>(9));
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            cin >> ans[i][j];
        }
    }
    int correct_cnt = 0;
    int wrong_cnt = 0;

    scored(ans, correct_cnt, wrong_cnt);

    result(ans, correct_cnt, wrong_cnt);

}

void scored(vector<vector<int>> &ans, int &correct_cnt, int &wrong_cnt){
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            int correct_ans = (i+1)*(j+1);
            if(ans[i][j] == correct_ans){
                correct_cnt++;
            }else{
                wrong_cnt++;
                ans[i][j] = correct_ans;
            }
        }
    }
}

void result(vector<vector<int>> ans, int correct_cnt, int worng_cnt){
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            cout << ans[i][j];
            if(j != 8){
                cout << " ";
            }else{
                cout << endl;
            }
        }
    }
    cout << correct_cnt << endl;
    cout << worng_cnt << endl;
}