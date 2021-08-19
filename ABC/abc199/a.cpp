#include <iostream>
#include <math.h>
using namespace std;
 
int main(void){
  int a,b,c;
  
  cin >> a >> b >> c;
  if(pow(a,2)+pow(b,2) < pow(c,2))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  
  return 0;
}