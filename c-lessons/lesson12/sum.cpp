#include <iostream>
using namespace std;

int add()
{
  int a,b;
  cout<<"これから二つの整数の足し算をします"<<endl;
  cout<<"１つめの数字を入力してください。"<<endl;
  cin>>a;
  cout<<"2つめの数字を入力してください。"<<endl;
  cin>>b;
  return a + b;
}

int main()
{
  int d =  add();
  cout<<"合計値は、"<<endl;
  cout<<d<<endl;
}