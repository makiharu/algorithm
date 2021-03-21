//coutによる浮動小数点の出力

#include<iostream>
using namespace std;

int main(){
  double a,b;
  char plus = '+';
  char end = '=';

  a = 0.3;
  b = 1.7;

  cout<<a<<plus<<b<<end<<a + b<<endl;
  return 0;
}