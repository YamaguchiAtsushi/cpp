#include <stdio.h>
#include <cstring>

class Employee{
public:
    int number;
    char name[80];
    int salary;
protected:
    void showData();
};

void Employee::showData(){
    printf("%d\n",number);
    printf("%s\n",name);
    printf("%d\n",salary);
}

class Saleman : public Employee{
public:
    int sales;
    void showAllData();
};

void Saleman::showAllData(){
    showData();
    printf("%d", sales);
}

int main(int argc, char **argv){
    Saleman tanaka;
    tanaka.number =1234;
    strcpy(tanaka.name, "tanaka");
    tanaka.salary = 20000;
    tanaka.sales = 9999;
    tanaka.showAllData();

    return 0;
}