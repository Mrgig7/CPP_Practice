#include <iostream>
using namespace std;

class Sale {
private:
    double itemCost;
    double taxRate;

public:
    Sale(double cost, double rate = 0.05) {
        itemCost = cost;
        taxRate = rate;
    }

    double getItemCost() const {
        return itemCost;
    }

    double getTaxRate() const {
        return taxRate;
    }

    double getTax() const {
        return (itemCost * taxRate);
    }

    double getTotal() const {
        return (itemCost + getTax());
    }

    ~Sale() {
        taxRate = 0.5;
    }
};

int main() {
    double TAX_RATE;
    cin >> TAX_RATE;
    double cost;
    cin >> cost;
    Sale itemSale(cost);

    cout << "The amount of sales tax is " << itemSale.getTax() << endl;
    cout << "The total of the sale is ";
    cout << itemSale.getTotal() << endl;

    Sale itemSale2(cost, TAX_RATE);

    cout << "The amount of sales tax with custom TAX RATE is " << itemSale2.getTax() << endl;
    cout << "The total of the sale is ";
    cout << itemSale2.getTotal() << endl;

    itemSale2.~Sale();
    cout << "The amount of sales tax with default tax rate is " << itemSale2.getTax() << endl;
    cout << "The total of the sale is ";
    cout << itemSale2.getTotal() << endl;

    return 0;
}