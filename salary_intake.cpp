// You are using GCC
#include <iostream>
using namespace std;

class Employee{
    private:
    static int count;
    int salary;
    
    public:
    Employee(){
        salary = 0;
        count++;
    }
    
    static int getCount(){
        return count;
    }
    
    void setSalary(int newSalary){
        salary = newSalary;
    }
    
    int getSalary(){
        return salary;
    }

};

int Employee::count = 0;

int main(){
    int n;
    cin>>n;
    
    Employee employees[n];
    
    for (int i = 0; i<n; ++i){
        int salary;
        cin>>salary;
        employees[i].setSalary(salary);
    }
    
    cout<<"Total number of employees: "<<Employee::getCount()<<endl;
    for (int i =0; i<n;++i){
        cout<<"Salary for employee "<<i+1<<":"<<" "<<employees[i].getSalary()<<endl;
    }
    
    return 0;
}