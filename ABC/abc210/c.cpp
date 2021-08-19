#include <iostream>
#include <stdlib.h>
using namespace std;

int c_int(const void *a, const void *b){
    return *(int*)a - *(int*)b;
}

int main(void){
    int n,k;
    cin >> n >> k;
    int col[n];
    for(int i=0; i<n; i++){
        cin >> col[i];
    }

    int st_index = 0,cnt,slid;
    bool f = true;
    int col_max = 0;
    int fd[k];
    
    while(st_index < n-k+1){
        slid = 1;
        cnt = 0;
        fd[0] = col[st_index];
        for(int i=1; i<k; i++){
            fd[i] = col[st_index+i];
            if(f && fd[i] == fd[i-1])   slid++;
            else    f = false;
        }
        qsort(fd, k, sizeof(int), c_int);
        for(int i=0; i<k-1; i++){
            //cout << fd[i];
            if(fd[i] == fd[i+1]){
                cnt++;
            }
        }
        //col_kind = k - cnt;
        //cout << endl;
        if((k-cnt) > col_max){
            col_max = k-cnt;
        }
        if(col_max == k)    break;

        st_index += slid;
    }

    cout << col_max << endl;

    return 0;
}