//関数をまだ勉強してなかったので勉強してみます。そういえばAtcoderっていうアルゴリズムが勉強できるやつがあるんですね。知らんかった！
//まあそれはおいおいやってみようと思います
include <iostream>
using namespace std;
int num(int a,int b){
  int num=a;
  if(num<b) num=b;
  return num;
  }
int main(){
  int a,b;
  a=30;
  b=60;
  cout<<"最大値は"<<num(a,b)<<'\n';
}

//簡単な関数の例題を作ってみました。関数はreturn文を使って引数を表示するんですな。あと、関数の宣言の形を覚えておかないと...
//ということはmain関数も０という引数をreturn文で確認するんかな
/*今日勉強したこと
・簡単な関数の問題
・return文の意味

