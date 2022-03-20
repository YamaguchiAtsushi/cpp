#include <stdio.h>

class MyMath{
public:
    int twice(int a);
    double twice(double a);
};

int MyMath::twice(int a){
    return a * 2;
}
double MyMath::twice(double a){
    return a * 2;
}

int main(int argc, char **argv){
    MyMath obj;
    int a;
    double b;

    a = obj.twice(3);
    b = obj.twice(3.14);

    printf("a = %d, b = %lf", a, b);

    return 0;
}