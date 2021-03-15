#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

class Omikuji
{
  int un;
public:
  Omikuji();
  void draw();
};

Omikuji::Omikuji()
{
  srand((unsigned)time(NULL));
  cout<<"自分のラッキーナンバー(1〜5)を入力してください。"<<endl;
  cin>>un;
}

//おみくじを引く
void Omikuji::draw()
{
  int x;
  x = rand() % 5 + 1;
  cout<<"あなたの運勢は";
  if(x == un) {
    cout<<"大吉ということです。"<<endl;
  }
  else {
    cout<<"並みということです。"<<endl;
  }
}

int main(){
  Omikuji ok;
  cout<<"1週間分の占いです。"<<endl;
  for(int i=0; i < 7; i++) {
    cout<<"今日から"<<i<<"日後:"<<endl;
    ok.draw();
  }
}