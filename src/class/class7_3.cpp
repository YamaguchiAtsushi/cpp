#include <stdio.h>
#include <cstring>

class Employee{
public:
    static int objNum;
    static const char *companyNamej;
    int number;
    char name[80];
    int salary;
    void showData();
    Employee();
    Employee(const char *na, int sa);
};

int Employee::objNum = 0;
const char *Employee::companyNamej = "abcde";

Employee::Employee(){
    objNum++;
    number = objNum;
    strcpy(name, "未設定");
    salary = 150000;
}

Employee::Employee(const char *na, int sa){
    objNum++;
    number = objNum;
    strcpy(name, na);
    salary = sa;
}

void Employee::showData(){
    printf("会社名%sgit \n", companyNamej);
    printf("社員番号%d\n", number);
    printf("氏名%s\n", name);
    printf("給与%d\n",salary);
}

int main(int argc, char **argv){
    Employee tanaka("tanaka", 200000);
    Employee sato("sato", 250000);
    Employee someone;

    tanaka.showData();
    sato.showData();
    someone.showData();
    printf("現在の社員数%d\n", Employee::objNum);
    
    return 0;
}