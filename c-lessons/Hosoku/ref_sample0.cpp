#include <iostream>
using namespace std;

void func(int& x)
{
  x += 5;
  
}

int main()
{
  int v = 3;
  func(v);
  cout<<v<<endl;
}