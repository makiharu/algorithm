#include<iostream>
#include<string>
using namespace std;

class Cup
{
    int capacity;
  public:
    Cup():capacity(10){} //引数を取らないコンストラクタ
    void take();
};

void Cup::take(){
  capacity -=2;
  cout<<"水を出しました。"<<endl;
  cout<<"現在のコップの中身は"<<capacity<<"です。"<<endl;
}


int main()
{
    Cup glass; //glassという名のコップを生成。（以下の解説を参照してください。）
    //引数を取らないコンストラクタが呼び出され、中に10の水を入れられる。
    cout << "コップglassをつくりました。" << endl;
    cout << "glassから水を出します。" << endl;
    glass.take();
    cout<<"終了"<<endl;
}