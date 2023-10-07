#include <iostream>
using namespace std;

bool isLeapYear(int);

bool isLeapYear(int year){
 
    if(year%100 == 0){
        if(year%400 == 0){
            return true;
        }
        else{
            return false;
        }
    }
    else{
        if(year%4 == 0){
            return true;
        }
        else{
            return false;
        }
    }
}

void checkIfLeapYear(int year){
    if(isLeapYear(year)){
        cout << year <<", is a leap year!" << endl;
    } else {
        cout << year <<", is not a leap year!" << endl;
    }
}

int main(){
    int year;
    cout << "Enter the year: ";
    cin >> year;
    checkIfLeapYear(year);
    return 0;

}