#include <stdio.h>

class MyClass{
public:
    int my_data;
    MyClass();
    MyClass(int m);
    ~MyClass();
};

MyClass::MyClass(){
    my_data = -1;
    printf("基本クラスの引数のないコンストラクタが呼び出されました\n");
}

MyClass::MyClass(int m){
    my_data = m;
    printf("基本クラスの引数を持つコンストラクタが呼び出されました\n");
}

MyClass::~MyClass(){
    printf("基本クラスのデストラクタが呼び出されました\n");
}

class NewClass : public MyClass{
public:
    int new_data;
    NewClass();
    NewClass(int n, int m);
    ~NewClass();
};

NewClass::NewClass(){
    new_data = -1;
    printf("派生クラスの引数のないコンストラクタが呼び出されました\n");
}

NewClass::NewClass(int n, int m) : MyClass(m){
    new_data = n;
    printf("派生クラスの引数を持つコンストラクタが呼び出されました\n");
}

NewClass::~NewClass(){
    printf("派生クラスのデストラクタが呼び出されました\n");
}

int main(int argc, char **argv){
    NewClass obj1;
    printf("%d\n", obj1.my_data);
    printf("%d\n", obj1.new_data);
    printf("*************\n");

    NewClass obj2(123, 456);
    printf("%d\n", obj2.my_data);
    printf("%d\n", obj2.new_data);

    return 0;
}
