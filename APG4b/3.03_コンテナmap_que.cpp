#include <bits/stdc++.h>
using namespace std;

// map,queue関数
int main(void){
    //map<Keyの型, valueの型> 変数名;
    map<string, int> point; //ex. 名前と点数を紐づける
    // point[Key] = value;
    point["vamb"] = 10000;
    point["nkc"] = 1000000;
    point["logi"] = 20000;

    cout << point["vamb"] << endl;
    cout << point["none"] << endl;  // エラーではなく初期値が格納される
    // cout << point.at("error") << endl; // エラーが出る

    //Keyの値が小さい順にループを回す。
    for(pair<string,int> p : point){
        string key = p.first;
        int value = p.second;
        cout << key << ":" << value << endl;
    }

    cout << endl;

    //queue
    queue<int> que;
    que.push(10);   // キューの末尾に追加
    que.push(2);

    while (!que.empty()){
        cout << que.front() << endl;    // キューの先頭を出力
        que.pop();  // きゅーの先頭を削除
    }

    cout << endl;

    //priority queue (最大値を取り出す)
    priority_queue<int> pri_que;
    pri_que.push(33);
    pri_que.push(44);

    while(!pri_que.empty()){
        cout << pri_que.top() << endl;  //キューの最大値を出力
        pri_que.pop();  //キューの最大値を削除
    }

    cout << endl;

    //priority queue (最小値を取り出す)
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(2);
    pq.push(3);

    while(!pq.empty()){
        cout << pq.top() << endl;   // キューの最小値を出力
        pq.pop();   // キューの最小値を削除
    }

    cout << endl;

    //deque (stackとqueue を同時に扱える)　強い
    deque<int> deq;
    deq.push_back(10);
    deq.push_back(3);
    deq.push_back(6);
    // deq = {10,3,6}

    cout << deq.front() << endl;
    deq.pop_front();        // 10 <- {3,6}

    cout << deq.back()  << endl;
    deq.pop_back();         // {3} -> 6

    deq.push_back(2);
    deq.push_front(5);
    //deq = {5,3,2}

    cout << deq[0] << endl; //i番目にアクセスもできる
}

