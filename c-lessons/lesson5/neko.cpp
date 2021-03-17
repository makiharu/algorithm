#include <iostream>
#include <string>
using namespace std;

class Neko
{
    string name;
  public:
    Neko(string s) :name(s){}
    void naku() const{
      cout<<"にゃあ。吾輩は"<<name<<"である"<<endl;
    }
};

class Dog
{
  private:
    string name;
  public:
    Dog(string s) {
      name = s;
    }

    void naku() {
      cout<<"わん!おいらは"<<name<<"だぞ！"<<endl;
    }
};

int main()
{
  // Neko dora("ボス");
  // cout<<"あなたの名付けたねこがメモリ上に生成されました。"<<endl;
  // cout<<"ねこが鳴きます。"<<endl;

  // dora.naku();

  string s;
  cout<<"どらねこを生成します。名前を入力してください。"<<endl;
  cin>>s;
  Neko dora(s);
  cout<<"あなたの名付けたねこがメモリ上に生成されました。"<<endl;
  cout<<"ねこが鳴きます。"<<endl;
  dora.naku();

  cout<<"今度はトマトイプーを生成してみます。名前を入力してください。"<<endl;
  string d;
  cin>>d;
  Dog tomatoypoo(d);
  cout<<"あなたの名付けた犬がメモリ上に生成されました。"<<endl;
  cout<<"犬が鳴きます。"<<endl;
  tomatoypoo.naku();
}
