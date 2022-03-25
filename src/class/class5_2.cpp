#include <stdio.h>
#include <cstring>

class Employee{
public:
    int number;
    char name[80];
    int salary;
};

class Director : public Employee{
public:
    int stock;
};

class Manager : public Employee{
public:
    int travelAllowance;
};

class Salesman : public Employee{
public:
    int sales;
};

int main(int argc, char **argv){
    Director y;
    y.number = 1111;
    strcpy(y.name, "役員一郎");
    y.salary = 50000;
    y.stock = 1000;
    printf("%d\n", y.number);
    printf("%s\n", y.name);
    printf("%d\n", y.salary);
    printf("%d\n", y.stock);

    Manager k;
    k.number = 2222;
    strcpy(k.name, "課長次郎");
    k.salary = 350000;
    k.travelAllowance = 10000;
    printf("%d\n", k.number);
    printf("%s\n", k.name);
    printf("%d\n", k.salary);
    printf("%d\n", k.travelAllowance);

    Salesman e;
    e.number = 3333;
    strcpy(e.name, "営業三郎");
    e.salary = 250000;
    e.sales = 1234;
    printf("%d\n", e.number);
    printf("%s\n", e.name);
    printf("%d\n", e.salary);
    printf("%d\n", e.sales);

    return 0;
}
