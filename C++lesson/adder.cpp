#include <iostream>
using namespace std;

int add(int x, int y) {
  return x + y;
}

int main() {
  int S = add(7, 9);
  printf("%d", S);
  
  int a,b;
  scanf("%d %d", &a, &b);
  printf("%d\n", a + b);
  return 0;
}