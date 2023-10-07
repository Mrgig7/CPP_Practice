// You are using GCC
#include <iostream>
using namespace std;
class ComplexNumber{
    private:
    double real;
    double imaginary;
    
    public:
    ComplexNumber(double r, double i) : real(r),imaginary(i){}
    
    friend ComplexNumber multiply(const ComplexNumber& num1, const ComplexNumber& num2){
        double result_real = (num1.real*num2.real)-(num1.imaginary*num2.imaginary);
        double result_imaginary = (num1.real*num2.imaginary)+(num1.imaginary*num2.real);
        return ComplexNumber(result_real,result_imaginary);
        
    }

    void print(){
        cout<<real;
        if(imaginary>=0){
            cout<<" + "<<imaginary<<"i";
        }else{
            cout<<" - "<<-imaginary<<"i";
        }
    }
};

int main(){
    double real1,imaginary1,real2,imaginary2;
    cin>>real1>>imaginary1;
    cin>>real2>>imaginary2;
    
    ComplexNumber num1(real1,imaginary1);
    ComplexNumber num2(real2,imaginary2);
    
    ComplexNumber result= multiply(num1,num2);
    
    result.print();
    return 0;
}
