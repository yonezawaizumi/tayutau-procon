# 2015年7月8日実施 社内プロコン

2015年7月8日に実施された社内プロコン Lucky! の書きなぐり回答です。

## お題

    1から100までの数字を1行ずつ出力せよ。
    ただし、7のつく数は"Lucky!"に置き換えて出力すること。
    
    例).
    1
    2
    3
    4
    5
    6
    Lucky!
    8
    ... 省略 ...
    14
    15
    16
    Lucky!
    18
    19
    20
    21
    ... 省略 ...
    68
    69
    Lucky!
    Lucky!
    ... 省略 ...
    Lucky!
    Lucky!
    Lucky!
    80
    81
    ... 省略 ...
    96
    Lucky!
    98
    99
    100

## レギュレーション

* 1人1コードのみ
* 匿名で共有サーバーの所定のフォルダーに提出
* 提出者の名前を類推させるようなコメントやファイル名は却下
* 使用言語は C・C#・PHP のいずれか

## 提出コード

### [procon1_submit.c](https://github.com/yonezawaizumi/tayutau-procon/blob/master/20150708/procon1_submit.c)

* Cで書いても相当すっきりするというかむしろPHPよりも「美しい」ため、これを提出
* 実行スピードが劣るのは覚悟の上（paiza.io で実行してみたところ、数値剰余判定に比して1.5倍近い所要時間）
* しかし！ **`int main()` なのに return 文がない！ という痛恨のミス** …（だって paiza.io でエラーにならないんだもん…）
* 11個のコードが寄せられ、匿名投票があり、私は上記問題から自分自身には投票せず、結果として2票が5コードというどんぐり背比べ状態のその 1つには選ばれました

## 各コード解説

### [procon1_submit.c](https://github.com/yonezawaizumi/tayutau-procon/blob/master/20150708/procon1_submit.c)

* Cで書いても相当すっきりするというかむしろPHPよりも「美しく」書けた
* sprintf に %d を渡しているわけで、この中で暗黙のうちに「10で割って剰余を出力」というループが実行されており、そこが隠蔽されている
* ロジックの実行スピードは paiza.io 調べで 1.10ms
* 実行スピードが遅いのは、sprintf は %d を解釈するだけではないから

### [procon2.c](https://github.com/yonezawaizumi/tayutau-procon/blob/master/20150708/procon2.c)

* 明らかに3桁の700番台に対応していない殴り書きバージョン
* ロジックの実行スピードは paiza.io 調べで 0.74ms

### [procon3.c](https://github.com/yonezawaizumi/tayutau-procon/blob/master/20150708/procon3.c)

* 何桁だろうと負数だろうと対応したバージョンで、procon2.c のマトモなバージョン

### [procon4.c](https://github.com/yonezawaizumi/tayutau-procon/blob/master/20150708/procon4.c)

* どうせ1～100限定で動作するのならもっと高速にしたれというカリカリチューンバージョン
* ロジックの実行スピードは paiza.io 調べで 0.10ms＼(^o^)／
* 汎用対応するには do ブロックの中に if ブロックの内容を移設すればよいが、1～100でそのまま実行してみたところわずかにスピードが落ちた
* おそらく、do ブロックの中で毎桁ごとに v % 10 == 7 かどうかの条件分岐が走ることが問題と思われる
* あ、do ブロックにすると範囲に 0 が含まれる場合にも問題ありますね（0 を特別扱いしないと空改行になる）

### [procon1.php](https://github.com/yonezawaizumi/tayutau-procon/blob/master/20150708/procon1.php)

* これがお題出されて2分間で最初に書き上げたコード
* procon1_submit.c よりもさらに短く、上限下限対応も不要だが、"\n" を三項演算子の : の両側に書いているところが「美しく」ない
* C の puts 偉大(笑)

### [procon2.php](https://github.com/yonezawaizumi/tayutau-procon/blob/master/20150708/procon2.php)

* LL で数値と文字列を混同させずに書くことに何の意味があるかわからないが、これは procon2.c のプロトタイプ版です

### [procon.scala](https://github.com/yonezawaizumi/tayutau-procon/blob/master/20150708/procon.scala)

* 人生初の「ロジックに関してのヒント無しで書いた」Scala プログラム
* まだ Scala 全然わかってなくてもこの程度は書けるところに感動
* paiza.io の実行スピードはめためた重過ぎました(;_;)

### [procon.hs](https://github.com/yonezawaizumi/tayutau-procon/blob/master/20150708/procon.hs)

* 人生初の「ロジックに関してのヒント無しで書いた」Haskell プログラム
* 一応、すごい本は 1年前にこなしたとはいえ、Haskell 全然わかってません
* 文字列が文字のリストなので、すごく簡単に書けるんだなぁと感動
* 当初、mapM_ を使わないで出力しようとして、I/Oモナド初心者罠に見事にハマりました（return () に辿り着けず、putStr "" とか書いていたアフォ）

### [professor.scala](https://github.com/yonezawaizumi/tayutau-procon/blob/master/20150708/professor.scala) (マイ師匠作)

* (この項 7/9 追記)
* と、以上を公開したところ、私のプログラミングのお師匠さんからソッコーで寄せられましたよ Scala コードが
* なんとワンライナー化できるメソッド定義なし、さすがお師匠さん
* メソッドなんか使わなくても match 式で事足りる
* 私レベルの超初心者はついつい「いかにも関数型」なカッコつけをしてしまってズッコケました、というみっともない話
* [procon.scala](https://github.com/yonezawaizumi/tayutau-procon/blob/master/20150708/procon.scala) では `foreach(x => println(x))` としてましたが、引数と戻り値の型がわかりきっているときは省略可能なので `foreach(println)` でよい
