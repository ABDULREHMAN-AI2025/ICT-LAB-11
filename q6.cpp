#include <iostream>
using namespace std;

class normalProduct
{
protected:
    string brand;
    int price;

    normalProduct(string a, int b)
    {
        brand = a;
        price = b;
    }
};

class discountedProduct : public normalProduct
{
protected:
    float finalPrice;
    int discountPercent;

public:
    discountedProduct(string a, int b) : normalProduct(a, b) {}

    void Discount(int percent)
    {
        discountPercent = percent;
        float discountedPrice = price * (percent / 100.0f);
        finalPrice = price - discountedPrice;
    }

    void print()
    {
        cout << "The item of brand " << brand
             << " with original price " << price
             << " has a discount of " << discountPercent << "% "
             << "and is now available for " << finalPrice << endl;
    }
};

int main()
{
    discountedProduct p1("Rolex", 57999);

    p1.Discount(20);

    p1.print();

    return 0;
}
