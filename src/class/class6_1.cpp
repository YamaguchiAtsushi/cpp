#include <stdio.h>

class MyClass{
public:
    void func1(int a);
    virtual void func2(const char *s);
};

void MyClass::func1(int a){
    printf("%d\n", a);
}

void MyClass::func2(const char *s){
    printf("%d\n", s);
}

class NewClass : public MyClass{
public:
    void func2(const char *s);
};

void NewClass::func2(const char *s){
    printf("文字列データ\n");
    printf("%s\n", s);
}

int main (int argc, char **argv){
    NewClass obj;
    obj.func1(123);
    obj.func2("abcde");
    return 0;
}