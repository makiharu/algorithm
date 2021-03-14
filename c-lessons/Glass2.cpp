#include<iostream>
using namespace std;

class Glass
{
    int capacity;
  public:
    //Glass():capacity(10){};//引数を取らないコンストラクタ
    Glass(int x):capacity(x){}
    void dasu(int);
};

void Glass::dasu(int x){
  if(capacity >= x) {
    capacity-=x;
  cout<<"水を出しました。"<<endl;
  cout<<"現在のコップの中身は"<<capacity<<"です。"<<endl;
  } else {
     cout<< "そんなに水がありません。" <<endl;
     cout<< "現在コップの中には" << capacity << "入っているだけです。" <<endl;    
  }
}

int main()
{
  int x;
  cout<<"コップを生成します。どれだけ水を入れるか決めてね"<<endl;
  cin>>x;
  Glass glass(x);
  cout << "さあ、glassから水を出します。いくら出しますか。入力してください。" <<endl;
  cin>>x;
  glass.dasu(x);
  cout<<"終了"<<endl;
}

