//完全に疲れましたｗAtcoderのおはじき？なんかそういう問題が解けないｗｗｗ結構初心者向けの問題なのに論理値エラー出まくって完全に委縮しちゃってます...泣きを見た
//コピペしたいにもコピペ元になるのがないす。もうしゃあないのでGitHubでも進めたろか思ってこれやってます現在10:50です

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(void){
  vector<int>v={1,3,3,4,5,2,1};
  int cnt;
  cnt=count(v.begin(),v.end(),3);
  cout<<"Number 3 occurs"<<cnt<<"times."<<endl;
  
  return 0;
}

//vectorクラス　#include<vector>、vector<int>hoge={};でvectorクラスの使用宣言
//vectorクラスは要素数が可変であり、かつ処理が高速である

/*引用元　https://www.tutorialspoint.com/cpp_standard_library/cpp_algorithm_count.htm#:~:text=The%20C%2B%2B%20function%20std%3A%3Aalgorithm%3A%3Acount%20%
28%29%20returns%20the%20number,range.%20This%20function%20uses%20operator%20%3D%3D%20for%20comparison.

Atcoderでも解けなかったCountっていうのはこれなんかな？っていうのでC++ Algorithm Library　から引用させていただきました。多分あれはcountを使えっていうことなんだろうね
でもcountって結構書くこと多くて萎えたｗｗｗ

次は特に考えてるのはないですが、まあぼちぼち進めていきます*/
  
