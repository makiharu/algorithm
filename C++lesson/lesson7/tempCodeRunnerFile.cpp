#include<iostream>
using namespace std;

int main(){
  int a = 3, b = 3, c = 3;
  bool result = ( a == b == c);//false
  cout<<result<<endl;

  int x = 2, y = 1, z = 0;
  bool result1 = (x == y == z);//true
  cout<<result1<<endl;
  
  return 0;
}