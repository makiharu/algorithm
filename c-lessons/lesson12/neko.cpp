#include <iostream>
#include <string>
using namespace std;

class Neko
{
    string name;
    int power;
  public:
    Neko(string s) :name(s), power(10){}
    int eat();
    int naku();
};

//クラス定義外
int Neko::eat(){
  cout<<"ご飯をどれくらいあげますか。"<<endl;
  int food;
  cin>>food;
  power += food;
  return power;
}

int Neko::naku(){
  cout<<"ねこが鳴きました。ニャーニャー。"<<endl;
  power -= 5;
  cout<<"お腹がすいて、力がでないにゃ。"<<endl;

  return power;
}

int main()
{
  cout<<"猫をメモリ上に生成します。名前を決めてください。"<<endl;
  string name;
  cin>>name;
  Neko mypet(name);
  for(int i =0; i < 5; i++) {
    cout<<"どうしますか？"<<endl;
    cout<<"1 食事を与える 2 鳴かす"<<endl;
    cout<<"半角の数字で入力してください"<<endl;
    int ans;
    cin>>ans;
    if(ans==1) {
      int n;
      n = mypet.eat();
      cout<<name<<"猫の体力："<<n<<endl;
    } else if(ans==2) {
      int n;
      n= mypet.naku();
      if(n <= 0) {
      cout<<"もうしらにゃい！！！！"<<endl;
      cout<<"食事が足りなかったので、"<<name<<"猫は隣の家に行ってしまいました。"<<endl;
        break;
      }
      cout<<name<<"猫の体力："<<n<<endl;
    }
    cout<<endl;
  }
  cout<<"おしまい"<<endl;
}