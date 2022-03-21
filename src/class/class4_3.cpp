#include <stdio.h>
#include <cstring>

class Employee{
public:
    int number;
    char name[80];
    int salary;
    void showData();
    Employee();
    Employee(int nu, const char *na, int sa);
};

void Employee::showData(){
    printf("%d\n", number);
    printf("%s\n", name);
    printf("%d\n", salary);
}

Employee::Employee(){
    number = 0;
    strcpy(name, "未設定");
    salary = 150000;
}

Employee::Employee(int nu, const char *na, int sa){
    number = nu;
    strcpy(name, "未設定");
    salary = sa;
}

int main(int argc, char** argv){
    Employee someone;
    someone.showData();

    Employee tanaka(1234, "tanaka", 200000);
    return 0;
}