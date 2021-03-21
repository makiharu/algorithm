#include<iostream>
using namespace std;

//代入演算子の結合
int main(){
  int a = 10, b = 2, c = 0;

  c = b+= a -= 7;
  cout<<c<<endl;

  return 0;
}