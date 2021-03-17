#include <iostream>
using namespace std;

class Glass
{
  int nakami;
public:
  Glass():nakami(10){}
  // void dasu(){nakami -= 2;}
  void dasu();
};

void Glass::dasu(){
  nakami -= 2;
  cout << "水を出しました。" << endl;
  cout << "現在のコップの中身は" << nakami << "です。" << endl;
}

int main()
{
  Glass glass;
  glass.dasu();
}