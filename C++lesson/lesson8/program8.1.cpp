#include<iostream>
using namespace std;

//整数の絶対値を出力する
int main(){
  int x;
  cin >> x;

  if(x < 0) x *= -1;

  cout << x << endl;

  return 0;
}