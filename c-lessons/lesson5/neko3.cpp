#include<iostream>
#include<string>
using namespace std;

class Neko
{
    string name;
  public:
    Neko(string s);
    void naku() const;
};

class Dog
{
    string name;
  public:
    Dog(string);//引数のstring sは省略できる
    void naku() const;
};

//クラス定義外
Neko::Neko(string s):name(s){};
void Neko::naku() const{
  cout<<"にゃあ。吾輩は"<<name<<"である。"<<endl;
}

Dog::Dog(string s):name(s){};
void Dog::naku() const{
  cout<<"わん！オレ様は"<<name<<"だぞ。ひれ伏せ！"<<endl;
}

int main()
{
  string s;
  cout<<"ねこを生成します。名前を入力してください。"<<endl;
  cin>>s;

  Neko dora(s);//doraが生成される
  dora.naku();

  string d;
  cout<<"犬を生成します。名前入力よろしく。"<<endl;
  cin>>d;
  
  Dog dog(d);
  cout<<"あなたの名付けた犬がメモリ上に生成されました。"<<endl;
  cout<<"犬が鳴きます。"<<endl;
  dog.naku();

}
