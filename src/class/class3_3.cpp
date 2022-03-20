#include <stdio.h>
#include <cstring>

class Employee{
public:
int number;
char name[80];
int salary;
void showData();
};

void Employee::showData(){
    printf("number:%d\n",number);
    printf("name:%s\n",name);
    printf("salary:%d\n",salary);
}

int main(int argc, char** argv){
    Employee tanaka;
    Employee *someone;

    someone = &tanaka;

    someone -> number = 1234;
    strcpy(someone -> name, "tanaka");
    someone -> salary = 200000;

    someone -> showData();

    return 0;
}