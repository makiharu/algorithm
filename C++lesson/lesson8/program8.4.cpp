#include <iostream>
using namespace std;

//三項演算子
int main(){
  int x, y, maxv;
  cin >> x >> y;

  maxv = (x > y)?x:y;

  cout << maxv << endl;

  return 0;
}