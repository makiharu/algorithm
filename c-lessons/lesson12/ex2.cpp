#include <iostream>
using namespace std;


int func()
{
  cout<<"こんち。我コンピュータなり。"<<endl;
  return 100;
}

int main()
{
  int d;
  d = func();
  cout<<"func()の戻り値="<<d<<endl;
}