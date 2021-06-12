#include <bits/stdc++.h>
using namespace std;

int main() {
  // 科目の数Nを受け取る
  int N;
  cin >> N;


  // それぞれのテストの点数を受け取る

  // N要素の配列A,B,Cを宣言
  vector<int> A(N), B(N), C(N);

  // N個の入力をそれぞれ受け取る
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }
  for (int i = 0; i < N; i++) {
    cin >> B.at(i);
  }
  for (int i = 0; i < N; i++) {
    cin >> C.at(i);
  }


  // プレゼントの予算を出力

  // テストの点数を表す配列から合計点を計算
  int sum_a = 0;
  for (int i = 0; i < A.size(); i++) {
    sum_a += A.at(i);
  }
  int sum_b = 0;
  for (int i = 0; i < B.size(); i++) {
    sum_b += B.at(i);
  }
  int sum_c = 0;
  for (int i = 0; i < C.size(); i++) {
    sum_c += C.at(i);
  }

  // 3人の合計点からプレゼントの予算を計算して出力する
  cout << sum_a * sum_b * sum_c << endl;
}

//ヒントになる
