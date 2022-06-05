#include <bits/stdc++.h>
using namespace std;
#define num 26

/*解説なしで解けない
英小文字からのみなる、長さNの文字列S。
長さがKのSの部分列のうち、辞書順で最小であるものを答えよ。

1<= K <= N <= 10^5

ex
input:
7 4
babacca

output:
aaca

前選んだ文字の右の文字列から最小のものを選択していく
このままだとTLEするので工夫が必要
j番目の文字より右の文字列(j番目を含む)において、文字iが最初に現れるindexを示す行列
ind[i][j]を作る.(-は-1とする)

ind=
i\j 0 1 2 3 4 5 6 ...   
 a  1 1 3 3 6 6 6        
 b  0 2 2 - - - -      
 c  4 4 4 4 4 5 -         
 d  - - - - - - -
...

indのaから順に、N-ind[i][j] >= K-cnt を満たす最初のiを探索し、(cnt++)
そのindが示すindex jの列から同じ右様にiを探索していく(cnt<=K)
*/

int main(void){
    int N,K;    cin >> N >> K;
    string S;   cin >> S;

    vector<vector<int>> ind(num, vector<int>(N, -1));
    //int("a")=97 
    //ind作成　多分O(S*num)
    for(int j=N-1; j>=0; j--){
        if(j != N-1){
            for(int k=0; k<num; k++){
                ind[k][j] = ind[k][j+1];
            }
        }
        int i = S[j];
        i -= 97;
        ind[i][j] = j;
    }

    string ans;
    int cnt = 0;
    int j = 0;
    for(int i=0; i<num; i++){
        if(N-ind[i][j] >= K && ind[i][j] != -1){
            j = ind[i][j];
            break;
        }
    }
    while(cnt < K){
        for(int i=0; i<num; i++){
            int index = ind[i][j];
            if(index != -1 && N-index >= K-cnt){
                ans += S[index];
                j = index+1;
                cnt++;
                break;
            }
        }
    }
    cout << ans << endl;
}