//AtCoderから、APG4bの「M-1.12.文字列と文字」で問題に使えそうな応用の例があったので、少し拝借させてもらうことにしました。
#include <bits/stdc++.h>
using namespace std;

int main() {
  string str;
  cin >> str;

  int count = 0;
  for (int i = 0; i < str.size(); i++) {
    if (str.at(i) == 'O') {
      count++;
    }
  }

  cout << count << endl;
}

//引用元 https://atcoder.jp/contests/apg4b/tasks/APG4b_m

/*入力された文字の中に、何文字"O"が含まれているのかを、for文を使って数え上げるプログラムらしいです。これを使えば問題に生かせると思う*/
