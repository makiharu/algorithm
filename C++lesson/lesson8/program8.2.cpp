#include<iostream>
using namespace std;

//偶数判定、奇数判定
int main(){
  int a;
  cin >> a;

  if(a % 2 ==0) {
    cout << a << " is an even number." << endl;
  } else {
    cout << a << " is an odd number." << endl;
  }

  return 0;
}