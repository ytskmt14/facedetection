Facedetection
=============

顔検出のプログラム(プロトタイプ)。
実行時のオプションによって、正面の顔、横顔、全身、上半身、下半身だったりと検出可能。
もはや顔検出プログラムというより、人検出プログラム。

[include/](https://github.com/ytskmt14/facedetection/tree/master/include) : ヘッダファイルをまとめてあるフォルダ。必要なものをインクルード、宣言してるだけ。  
[src/](https://github.com/ytskmt14/facedetection/tree/master/src) ：ソースファイルをまとめてあるフォルダ。main.cppとfacedetection.cppのみ。  

## Description

[src/main.cpp](https://github.com/ytskmt14/facedetection/blob/master/src/main.cpp) : なんてことはないプログラム。カメラから画像取得して、関数に画像投げて処理してもらって表示する。ただそれだけ。Escキーで終了。  
[src/facedetection.cpp](https://github.com/ytskmt14/facedetection/blob/master/src/facedetection.cpp) :いろいろ検出するためのプログラム。入力画像と実行時に渡された.xmlファイルを引数にとる、detectFaceInImage関数を定義する。適当に閾値を設定してその範囲内で適当な回数連続で検出が行われると画像を保存、コメントも保存する。  

## Requirement

OpenCV : 開発環境は3.0.0  
Cmake  : 開発環境は3.4.0  
pkg-config : 開発環境は0.29  

## Usage

    $ make
    $ cd build/bin
		$ ./Facedetection /usr/local/share/OpenCV/haarcascade/cascadefile

でok.
_cascadefileについて_

* haarcascade_eye.xml

* haarcascade_frontalface_alt2.xml

* haarcascade_fullbody.xml

* haarcascade_lowerbody.xml

* haarcascade_upperbody.xml

* haarcascade_profileface.xml

のどれかを指定。他にもある。.xmlの場所は各々の環境による。

## Install

`$ git clone https://github.com/ytskmt14/facedetection.git `

## Author

[ytskmt14](https://github.com/ytskmt14)


