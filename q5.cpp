#include <iostream>
using namespace std;

class employee
{
protected:
    int id;
    int salary;

    employee(int a, int b)
    {
        id = a;
        salary = b;
    }
};

class partTimeEmploye : protected employee
{
protected:
    int hourlySal;

public:
    partTimeEmploye(int a,int b) : employee(a, b) {}

    int hourlySalary(int hours)
    {
        hourlySal = salary / hours;
        return hourlySal;
    }

    void print(){
        cout << "Employee Id "<<" "<<id<<" has monthly salary "<<salary<<" and hourly salary "<<hourlySal<<endl;
    }
};

int main()
{
    partTimeEmploye e1(123, 55300);

    e1.hourlySalary(15);

    e1.print();


    return 0;
}