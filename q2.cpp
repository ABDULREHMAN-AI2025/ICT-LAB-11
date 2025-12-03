#include <iostream>
using namespace std;

class studentInformation
{
public:
    string name;
    int id;
    char gradeLevel;

    studentInformation(string a, int b, char c)
    {
        name = a;
        id = b;
        gradeLevel = c;
    }
};

void print(studentInformation s){
    cout<<" "<<s.name<<" "<< s.id<<" "<<s.gradeLevel<<endl;
}

int main()
{
    studentInformation s1("Abdul",001,'A');
    studentInformation s2("Qasim",002,'B');

    print(s1);
    print(s2);
    return 0;
}