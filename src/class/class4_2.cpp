#include <stdio.h>
#include <cmath>

class SimpleMath{
private:
    double tempCalc(double a, double b, double c);

public:
    bool quadratic(double a, double b, double c, double *x1, double *x2);
};

bool SimpleMath::quadratic(double a, double b, double c, double *x1, double *x2){
    double temp;

    temp = tempCalc(a, b, c);
    if(temp < 0){
        return false;
    }
    else{
        *x1 =  (-b + sqrt(temp)) / (2 * a);
        *x2 =  (-b - sqrt(temp)) / (2 * a);
        return true;
    }
}

double SimpleMath::tempCalc(double a, double b, double c){
    return b * b - 4 * a * c;
}

int main (int argc, char **argv){
    SimpleMath sm;
    double x1, x2;

    if(sm.quadratic(3, 10, 7, &x1, &x2) == true){
        printf("x1 = %f\n", x1);
        printf("x2 = %fd\n", x2);
    }
    else{
        printf("解なし");
    }
    return 0;
}