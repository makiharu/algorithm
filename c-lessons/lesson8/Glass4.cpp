//Glass4.cpp
#include <iostream>
using namespace std;

class Glass
{
  int nakami;
public:
  //コンストラクタを２つ用意する
  //引数を取らないコンストラクタ
  Glass():nakami(10){}
  //引数をとるコンストラクタ
  Glass(int x):nakami(x){}
  void dasu(int);
};

void Glass::dasu(int x) {
  if(nakami -x >= 0) {
    nakami -= x;
    cout<<"水を出しました。"<<endl;
    cout<<"現在のコップの中身は"<<nakami<<"です。"<<endl;
  } else {
    cout<<"そんなに水がありません。"<<endl;
    cout<<"現在コップの中には"<<nakami<<"入っているだけです。"<<endl;
  }
}

int main(){
  int x;
  cout<<"水量10のコップ(glass)を生成します。"<<endl;
  Glass glass; //引数なしコンストラクタを呼び出す
  cout<<"さぁ、glassから水を出します。いくら出しますか。入力してください。"<<endl;
  cin>>x;
  glass.dasu(x);
  cout<<"水量20のコップ(glasss2)を生成します。"<<endl;
  Glass glass2(20);//引数ありコンストラクタ
  cout<<"では、glass2から水を出します、いくら出しますか。入力してください。"<<endl;
  cin>>x;
  glass2.dasu(x);
  cout<<"終了"<<endl;
}