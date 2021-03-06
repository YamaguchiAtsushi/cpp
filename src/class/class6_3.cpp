#include <stdio.h>
#include <Company.h>

int main(int argc, char **argv){
    Employee *p[6];

  // 派生クラスのオブジェクトを作成し、基本クラスのポインタに代入する
    Director y(1111, "役員一郎", 500000, 1000);
    p[0] = &y;
    Manager b1(2222, "課長一郎", 350000, 10000);
    p[1] = &b1;
    Manager b2(3333, "課長次郎", 300000, 5000);
    p[2] = &b2;
    Salesman e1(4444, "営業一郎", 230000, 1235);
    p[3] = &e1;
    Salesman e2(5555, "営業次郎", 250000, 4567);
    p[4] = &e2;
    Salesman e3(6666, "営業三郎", 270000, 6789);
    p[5] = &e3;

  // メンバ関数を呼び出す
    for (int i = 0; i < 6; i++) {
    p[i]->showData();
    printf( "********************\n");
}

  return 0;
}

