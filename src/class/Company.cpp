#include <stdio.h>
#include <cstring>
#include "Company.h"
using namespace std;

// Employeeクラスのメンバ関数の実装
void Employee::showData() {
    printf("社員番号:%d\n", number);
    printf("氏名:%d\n", name);
    printf("給与:%d\n", salary);
}

// Employeeクラスの引数のないコンストラクタの実装
Employee::Employee() {
    number = 0;
    strcpy(name, "未設定");
    salary = 150000;
}

// Employeeクラスの引数を持つコンストラクタの実装
Employee::Employee(int nu, const char *na, int sa) {
    number = nu;
    strcpy(name, na);
    salary = sa;
}

// Directorクラスのメンバ関数の実装
void Director::showData() {
    Employee::showData();
    printf("株式保有数:%d\n", stock);

}

// Directorクラスの引数のないコンストラクタの実装
Director::Director() {
    stock = 100;
}

// Directorクラスの引数を持つコンストラクタの実装
Director::Director(int nu, const char *na, int sa, int st) : Employee(nu, na, sa) {
    stock = st;
}

// Managerクラスのメンバ関数の実装
void Manager::showData() {
    Employee::showData();
    printf("出張費:%d\n", travelAllowance);

}

// Managerクラスの引数のないコンストラクタの実装
Manager::Manager() {
    travelAllowance = 10000;
}

// Managerクラスの引数を持つコンストラクタの実装
Manager::Manager(int nu, const char *na, int sa, int tr) : Employee(nu, na, sa) {
    travelAllowance = tr;
}

// Salesmanクラスのメンバ関数の実装
void Salesman::showData() {
    Employee::showData();
    printf("売上:%d\n", sales);
}

// Salesmanクラスの引数のないコンストラクタの実装
Salesman::Salesman() {
    sales = 0;
}

// Salesmanクラスの引数を持つコンストラクタの実装
Salesman::Salesman(int nu, const char *na, int sa, int ss) : Employee(nu, na, sa) {
    sales = ss;
}