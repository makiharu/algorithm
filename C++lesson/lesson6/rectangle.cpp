/**
 * たてa, 横bcmの長方形の面積と周の長さを求めるプログラムの作成 
 */
#include<cstdio>
int main(){
  int a,b, c;
  scanf("%d %d", &a, &b);
  printf("%d %d\n", a * b, 2 *(a + b));
  return 0;
}

// #include<iostream>
// using namespace std;
// int main(){
//   int a,b;
//   cin>>a>>b;
//   cout << a * b << " "<< 2 * (a + b)<<"\n";
//   return 0;
// }
