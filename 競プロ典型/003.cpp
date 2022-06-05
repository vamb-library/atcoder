#include <bits/stdc++.h>
using namespace std;

//木構造の性質を利用して、木構造のグラフにおける最大距離数(木の直径)を求める問題

//深さ優先で入力ノードから各ノードへの距離数を求める。多分O(N)
void Get_distance(vector<vector<int>> &tr, vector<int> &distance, int node, int pre_node, int dis);

int main(void){
    int N;  cin >> N;
    int a,b;
    vector<vector<int>> tr(N);
    for(int i=0; i<N-1; i++){
        cin >> a >> b;
        //木の構築
        //リンクはN-1個なので閉回路はできない
        tr[a-1].push_back(b-1);
        tr[b-1].push_back(a-1);
    }

    //木のルート(ノード0)から最大距離にあるノード番号を調べる。
    //上記のノードから最大距離にあるノードまでの距離＋1がスコアになる

    int st_node=0, pre_node=-1, dis=0;    //開始ノード,直前ノード,開始ノードからの距離

    //ノード0から各ノードまでの距離数を求める
    vector<int> distance(N);
    Get_distance(tr, distance, st_node, pre_node, dis);

    //ノード0から最大距離にあるノード番号を取得する。
    int max_node=0, max_dis=distance[0];
    for(int i=1; i<N; i++){
        if(distance[i] > max_dis){
            max_node = i;
            max_dis = distance[i];
        }
    }

    //確認用
    /*
    for(int x : distance){
        cout << x << " ";
    }
    cout << endl;

    cout << max_dis << " " << max_node << endl;
    */

    //求めたノード番号から各ノードまでの距離数を求める
    st_node = max_node;
    Get_distance(tr, distance, st_node, pre_node, dis);

    //最大距離数を求め、+1で出力する
    max_node=0, max_dis=distance[0];
    for(int i=1; i<N; i++){
        max_dis = max(distance[i], max_dis);
    }

    cout << max_dis+1 << endl;
}

void Get_distance(vector<vector<int>> &tr, vector<int> &distance, int node, int pre_node, int dis){
    int len = tr[node].size();
    for(int i=0; i<len; i++){
        if(tr[node][i] != pre_node){
            Get_distance(tr, distance, tr[node][i], node, dis+1);
        }
    }

    distance[node] = dis;
}
