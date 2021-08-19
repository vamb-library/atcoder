#include <iostream>
#include <iomanip>
using namespace std;

int main(void){
    int N;
    cin >> N;

    double x[N], y[N];
    double D,H, slope, min_slope, ans;

    cin >> D >> H;
    for(int i=0; i<N; i++){
        cin >> x[i] >> y[i];
    }

    min_slope = ((H-y[0])/(D-x[0]));
    for(int i=1; i<N; i++){
        slope = ((H-y[i])/(D-x[i]));
        if(slope < min_slope){
            min_slope = slope;
        }
    }

    ans = H - min_slope*D;

    if(ans < 0) ans = 0.0;
    cout << fixed << setprecision(6);
    cout << ans << endl;

    return 0;
}