#include <stdio.h>

class MyClass{
public:
    int myVal;
    MyClass();
    MyClass(int m);
    ~MyClass();
};

MyClass::MyClass(){
    myVal = 0;
    printf("コンストラクタが呼び出されました\n");
}

MyClass::MyClass(int m){
    myVal = m;
    printf("コンストラクタが呼び出されました\n");
}

MyClass::~MyClass(){
    printf("デコンストラクタが呼び出されました\n");
}

void func();

MyClass g(123);

int main(int argc, char **argv){
    printf("プログラムが起動\n");
    printf("g.myvalの値%d\n", g.myVal);
    func();
    func();
    printf("プログラムが終了\n");
    return 0;
}

void func(){
    printf("func()が呼び出されました\n");
    MyClass a;
    printf("a.myvalの値:%d\n", a.myVal);
    a = 456;
    printf("func()から抜けます\n");
}