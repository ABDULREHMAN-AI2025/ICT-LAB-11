#include <iostream>
using namespace std;

class vechicle
{
public:
    string brand;
    int speed;
};
class car : public vechicle
{
public:
    int NoOfDoors;

    void print()
    {
        cout << "the vechicle " << brand << " has a speed(km/h) of " << speed << " has " << NoOfDoors << " no of doors" << endl;
    }
};

int main()
{

    car c1;

    c1.brand = "toyota";
    c1.speed = 150;
    c1.NoOfDoors = 5;

    c1.print();

    return 0;
}