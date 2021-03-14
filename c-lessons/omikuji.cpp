#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
  int un;
  cout<<"自分のラッキーナンバー(1〜5)を入力してください"<<endl;
  cin>>un;
  srand((unsigned)time(NULL));
  int x;
  x = rand() % 5 + 1;//引いたおみくじの番号
  cout<<"あなたの運勢は";
  if(x == un) {
    cout<<"大吉ということです。"<<endl;
  } else {
    cout<<"並みということです。"<<endl;
  }
}