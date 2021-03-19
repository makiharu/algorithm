#include<studio.h>

/* 配列の要素を順番に出力 */
void trace(int A[], int N) {
  for(i=0; i < N; i ++) {
    if(i > 0) printf(" ");
    printf("%d", A[i]);
  }
  printf("\n");
}