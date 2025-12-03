#include <iostream>
using namespace std;

class Payment {
public:
    virtual void processPayment() {
        cout << "Processing payment in a general way." << endl;
    }
};

class CreditCardPayment : public Payment {
public:
    void processPayment() override {
        cout << "Processing payment using Credit Card." << endl;
    }
};

class CashPayment : public Payment {
public:
    void processPayment() override {
        cout << "Processing payment using Cash." << endl;
    }
};

class UPIPayment : public Payment {
public:
    void processPayment() override {
        cout << "Processing payment using UPI." << endl;
    }
};

int main() {
    Payment* p1 = new CreditCardPayment();
    Payment* p2 = new CashPayment();
    Payment* p3 = new UPIPayment();

    p1->processPayment();
    p2->processPayment();
    p3->processPayment();

    delete p1;
    delete p2;
    delete p3;

    return 0;
}
