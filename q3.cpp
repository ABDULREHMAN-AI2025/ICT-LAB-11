#include<iostream>
using namespace std;

class animal{
    public:
    string name;
    
    void sound(){
        cout<<"sound coming"<<endl;
    }
};

class dog : public animal{
    public:
    string behaviour;  
    void bark(){
        cout<<"the dog named : "<<name<<" "<<behaviour<<endl;
    }
};


int main(){
    dog d1;
    d1.name="tom";
    d1.behaviour="barked";
    d1.bark();

    return 0;
}