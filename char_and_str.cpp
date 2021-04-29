/*
・文字列を扱うにはstring型を使う
・文字を扱うにはchar型を使う
・文字列変数.size()で文字列の長さを取得できる
・文字列変数.at(i)でi文字目にアクセスできる
・文字列変数.at(i)のiを添え字という
・添字は0から始まる
・添字の値が正しい範囲内に無いと実行時エラーになる
*/


#include<iostream>
using namespace std;
int main(){
  string str;
  char cha;
  cin>>str>>cha\n;
 //size()で文字列の長さを取得
  cout<<str.size()\n;
  cout<<cha.size()\n;
 //at(i)でi文字目へのアクセス
  cout<<str.at(1)\n; /*入力した文字列の前から2番目の文字にアクセスし、出力する。*/
 //[注意]stringはダブルクオーテーション("")で囲むのに対して、charはシングルクオーテーションで囲む('')
}
  
  
