#include <bits/stdc++.h>
using namespace std;

int send_time(vector<vector<int>> children, int parent);

int main(void){
    int n;  cin >> n;
    vector<int> p(n);
    p[0] = -1;
    for(int i=1; i<n; i++){
        cin >> p[i];
    }
    vector<vector<int>> children(n);    //各ノードの子一覧
    for (int i=1; i<n; i++){
        int parent = p[i];
        children[parent].push_back(i);  //親であるノードの子一覧に追加
    }

    cout << send_time(children,0) << endl;
}

int send_time(vector<vector<int>> children, int parent){
    int len = children[parent].size();
    int time, max_time=0;
    if(len != 0){
        for(int i=0; i<len; i++){
            time = send_time(children, children[parent][i])+1;
            max_time = max(time,max_time);
        }
    }else{
        return 0;
    }
    
    return max_time;
}