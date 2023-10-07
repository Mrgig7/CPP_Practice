#include <iostream>
#include <iomanip>
using namespace std;

double calculateTotalPrice(double price){
    return price;
}

double calculateTotalPrice(double price, int quantity){
    return price * quantity;
}

double calculateTotalPrice(double price, int quantity, double discountPercentage){
    double discountedPrice = price*(1-(discountPercentage/100));
    return discountedPrice * quantity;
}

int main(){
    int choice;
    
    while(true){
        cin>>choice;
        
        if (choice == 4){
            cout<<endl;
            break;
        }
        
        double price, discountPercentage;
        int quantity;
        
        switch(choice){
            case 1:
            cin>>price;
            cout<<fixed<<setprecision(2)<<calculateTotalPrice(price)<<endl;
            break;
            
            case 2:
            cin>>price;
            cin>>quantity;
            cout<<fixed<<setprecision(2)<<calculateTotalPrice(price,quantity)<<endl;
            break;
            
            case 3:
            cin>>price;
            cin>>quantity;
            cin>>discountPercentage;
            cout<<fixed<<setprecision(2)<<calculateTotalPrice(price,quantity,discountPercentage)<<endl;
            break;
            
            default:
            cout<<"Invalid choice! Please try again."<<endl;
        }
    }
    return 0;
}