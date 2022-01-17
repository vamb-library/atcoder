#include <bits/stdc++.h>
using namespace std;

int report_cnt(vector<vector<int>> children, int i);

int main(void){
    int n; cin >> n;
    vector<int> p(n);
    p[0] = -1;
    for(int i=1; i<n; i++){
        cin >> p[i];
    }

    vector<vector<int>> children(n); //子ノード一覧
    for(int i=1; i<n; i++){
        children[p[i]].push_back(i);
    }

    for(int i=0; i<n; i++){
        cout << report_cnt(children, i)+1 << endl;
    }

}

int report_cnt(vector<vector<int>> children, int parent){
    int len = children[parent].size();
    int report = 0;
        
    if(len != 0){
        for(int i=0; i<len; i++){
            report += report_cnt(children, children[parent][i])+1;
        }
    }
    return report;
}