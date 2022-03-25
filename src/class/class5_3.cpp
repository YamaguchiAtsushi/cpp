#include <stdio.h>

class MyClass{
public:
    MyClass();
    ~MyClass();
};

MyClass::MyClass(){
    printf("基本クラスのコンストラクタが呼び出されました\n");
}

MyClass::~MyClass(){
    printf("基本クラスのデコンストラクタが呼び出されました\n");
}

class NewClass : public MyClass{
public:
    NewClass();
    ~NewClass();
};

NewClass::NewClass(){
    printf("派生クラスのコンストラクタが呼び出されました\n");
}

NewClass::~NewClass(){
    printf("派生クラスのデコンストラクタが呼び出されました\n");
}

int main(int argc, char **argv){
    NewClass obj;
    printf("***************\n");
    return 0;
}

