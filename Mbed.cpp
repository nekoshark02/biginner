//部活でMbedを使うことになったので、Mbedのついてのプログラミングを勉強します。これを書いているのは23:00なので、学校と部活終わりでだいぶ疲れております
//まあでもやるべき仕事はいずれやることになるし、先輩もそこまで暇ではないでしょうから、プログラミングの勉強は頑張ります...

#include "Mbed.h"

Digitalout dig(p24);
PwmOut pwm(p23);
Timer t;
//部活ではピンの番号は決まっているらしいのですが、まあうろ覚えなので、そこは覚えている範囲で...

int main(){
  dig=1;
  t=0.2;
  pwm=0.4;
}

/*このプログラムの内容は特に意味を持ってませんので、まともに動かないと思います。今日勉強した内容の忘備録みたいな感じなので。

・関数は括弧を使う→引数を格納するため
　...関数ではないときは、基本的にかっこはつかないので注意
・waitよりTimerを使ったほうがいい
・部活でよく使うのはdoubleよりfloat


疲れた...よく考えてみるとぱっと見プログラム本体よりコメントの方が多いですねｗｗｗ　

次はちゃんとしたMbedのプログラムを書きます*/
  
  
