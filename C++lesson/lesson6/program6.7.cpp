#include<cstdio>

int main(){
  int age;
  char blood;
  double height;

  scanf("%d %c %lf", &age, &blood, &height);
  printf("age = %d, blood = %c, ", age, blood);
  printf("height = %f\n", height);

  return 0;
}