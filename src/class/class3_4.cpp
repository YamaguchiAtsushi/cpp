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

class MySample{
public:
void useObject(Employee *obj);

Employee* retObject();
};

void MySample::useObject(Employee *obj){
    obj -> showData();
}
Employee* MySample::retObject(){
    static Employee obj;
    obj.number = 1234;
    strcpy(obj.name,"tanaka");
    obj.salary = 200000;

    return &obj;
}

int main(int argc, char** argv){
    Employee *someone;
    MySample ms;

    someone = ms.retObject();

    ms.useObject(someone);

    return 0;
}