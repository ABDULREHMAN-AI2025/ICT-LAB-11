#include<iostream>
using namespace std;

class printer{
    public:
    string name;
    int age;
    string city;

    printer(string a,int b,string c){
        name=a;
        age=b;
        city=c;
    }

    void printinfo(string name){
        cout<<" My name is "<<name<<endl;
    }
    void printinfo(string name,int age){
        cout<<" MY name is  "<< name<<" ia am "<<age<<"years old"<<endl;
    }
    void printinfo(string name,int age,string){
        cout<<" MY name is  "<< name<<" ia am "<<age<<"years old"<<" and i live in "<<city<<endl;
    }
};


int main(){
    printer person1("Abdul Rehman",21,"Karachi");

    person1.printinfo(person1.name);
    person1.printinfo(person1.name,person1.age);
    person1.printinfo(person1.name,person1.age,person1.city);



    return 0;
}