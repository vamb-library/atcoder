#include <iostream>
#include <math.h>
using namespace std;

int main(void){
    double r, x, y;
    int step_cnt = 0;
    double point_des;
    cin >> r >> x >> y;

    //一直線に到達できる場合
    while(true){
        //原点から目的点までの距離
        point_des = sqrt(pow(x,2)+pow(y,2));
        break;
    }

    //cout << step_cnt << x << endl;

    return 0;
}