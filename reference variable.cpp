#include <iostream>
using namespace std;

void modify(int a){
    a ++;
}

void modifyReference(int &a){
    a ++;
}

int main(){
    int a = 11;
    int b = a;
    int &ref = a;

    a = a + 1;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "ref: " << ref << endl;
    cout << "-----------------" << endl;

    a = 11;
    b = a;
    ref = a;

    b = b + 1;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "ref: " << ref << endl; 
    cout << "-----------------" << endl;

    a = 11;
    b = a;
    ref = a;

    ref = ref + 1;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "ref: " << ref << endl;
    cout << "-----------------" << endl;

    b = 10;
    cout << "Before modify function call: b= " << b <<endl;
    modify(b);
    cout << "After modify function call: b= " << b <<endl;
    cout << "-----------------" << endl;

    b = 10;
    cout << "Before modify reference function call: b= " << b <<endl;
    modifyReference(b);
    cout << "After modify reference function call: b= " << b <<endl;

    return 0;


}