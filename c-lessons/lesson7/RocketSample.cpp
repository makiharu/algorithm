#include<iostream>
#include<string>
using namespace std;

class Rocket
{
    int fuel;//燃料
    int speed;
  public:
    Rocket(int);
    void kasoku();
};

//コンストラクタの定義
Rocket::Rocket(int x):fuel(x), speed(0){};

void Rocket::kasoku(){
  if(fuel != 0) {

  speed +=2;
  fuel -=2;
  cout<<"現在の燃料は"<<fuel<<"です。"<<endl;
  cout<<"現在の速度は"<<speed<<"です。"<<endl;
  } else {
    cout<<"燃料切れです。加速できません。ちゅどん。"<<endl;
  }
}

int main()
{
  cout<<"ロケットをメモリ上に作ります。燃料(整数)を入力してください。"<<endl;
  int n;
  cin>>n;
  Rocket roku(n);
  cout<<"加速します。"<<endl;
  roku.kasoku();
  cout<<"また、加速してみます。"<<endl;
  roku.kasoku();
  cout<<"またまた、加速してみます。"<<endl;
  roku.kasoku();
  cout<<"6号の冒険は終わりました。"<<endl;
}
