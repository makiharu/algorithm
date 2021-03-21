#include<iostream>
using namespace std;

int main(){
  bool A = true;
  bool B = false;
  bool C = true;

  cout<<(A && !B && C) << " ";
  cout<<(A && B || C != B)<<" ";
}