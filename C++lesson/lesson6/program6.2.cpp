#include<cstdio>

int main(){
  double a, b;
  char plus = '+';//文字はシングルクォーテーションでくくる
  char equal = '=';
  a = 0.3;
  b = 1.7;

  printf("%f %c %f %c %f\n", a, plus, b, equal, a + b);
  return 0;
}