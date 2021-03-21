#include <iostream>
using namespace std;

/*
1からnまでの和を求めるプログラム
*/
int main() {
  int n, S;
  cin>> n;
  S = (1 + n)*n / 2;
  //printf("%d", S);
  cout<<S<<"\n";
  return 0;
}