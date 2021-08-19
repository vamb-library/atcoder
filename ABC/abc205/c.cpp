#include <iostream>
using namespace std;

int main(void){
    int a,b,c,flag;
    //pow(a,c),pow(b,c)の比較
    //a,bが両方とも正の整数 - a,bの比較

    //一方が負の整数        -
    // cが偶数              - |a|,|b|の比較
    // cが奇数              - 負の方が小さい

    //両方とも負の整数      - 
    // cが偶数              - |a|,|b|の比較
    // cが奇数              - 上記の逆

    //flag = 
    //0 : =
    //-1 : <
    //1 : >

    cin >> a >> b >> c;
    
    if(a==b || (-a)==(-b))   flag = 0;
    else if(a>=0){
        if(b>=0){
            //a,bが両方とも正の整数 - a,bの比較
            if(a<b){
                flag = -1;
            }else{
                flag = 1;
            }
        }else{
            //一方が負の整数        -
            // cが偶数              - |a|,|b|の比較
            // cが奇数              - 負の方が小さい
            if(c%2 == 0){
                if(abs(a)==abs(b))  flag = 0;
                else if(a<-b){
                    flag = -1;
                }else{
                    flag = 1;
                }
            }else{
                flag = 1;
            }
        }
    }else{
        if(b>=0){
            if(c%2 == 0){
                if(abs(a)==abs(b))  flag = 0;
                else if(-a<b){
                    flag = -1;
                }else{
                    flag = 1;
                }
            }else{
                flag = -1;
            }
        }else{
            //両方とも負の整数      - 
            // cが偶数              - |a|,|b|の比較
            // cが奇数              - 上記の逆
            if(c%2 == 0){
                if(a>b){
                    flag = -1;
                }else{
                    flag = 1;
                }
            }else{
                if(a<b){
                    flag = -1;
                }else{
                    flag = 1;
                }
            }
        }
    } 
    
    switch(flag){
        case 0:
            cout << "=" << endl;
            break;
        
        case -1:
            cout << "<" << endl;
            break;

        case 1:
            cout << ">" << endl;
            break;
        
        default:
            cout << "Error output" << endl;
            return -1;
    }

    return 0;
}