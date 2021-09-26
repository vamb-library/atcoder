#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long k;
    cin >> k;
    long long n = k;
    long long k_init = k;

    vector<pair<long long, long long> > res;
    long long i;
    for (i = 2; i * i <= k; ++i) {
        if (k % i != 0) continue;
        long long ex = 0; // 指数

        // 割れる限り割り続ける
        while (k % i == 0) {
            ++ex;
            k /= i;
        }

        // その結果を push
        res.push_back({i, ex});
    }

    // 最後に残った数について
    if (k != 1) res.push_back({k, 1});

    int len = res.size();
    for (i = 0; i < len; i++){
        if (res[i].second > 1){
            long long ex = (res[i].second)/2;
            n /= pow(res[i].first, ex);
        }
    }

    if(n == k_init){
        n = -1;
    }

    cout << n << endl;

    return 0;
}
