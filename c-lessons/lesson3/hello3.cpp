//hello3.cpp

#include<iostream>
#include<string>
using namespace std;

int main()
{
  string name;
  
  int age;

  cout<<"こんにちは。私はコンピュータです。"<<endl;
  cout<<"あなたの名前を入力してください。"<<endl;
  cin>>name;

  cout<<name<<"さん。よろしく。"<<endl;
  cout<<"ところで。"<<name<<"さん。失礼ですが、おいくつですか？"<<endl;

  cout<<"必ず半角数字で入力してください。"<<endl;
  cin>>age;

  cout<<"なるほど。"<<age<<"歳ですか。"<<endl;
  cout<<"私はもうすぐ２歳のマシンです"<<endl;
}