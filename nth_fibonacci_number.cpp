// You are using GCC
#include <iostream>
using namespace std;

unsigned long long fibonacci(int num){
    if (num<=0){
        return 0;
    }
    else if(num == 1){
        return 1;
    }


unsigned long long prev = 0;
unsigned long long current = 1;

for (int i = 2;i<=num;i++){
    unsigned long long next = prev + current;
    prev=current;
    current=next;
    }

return current;
}

unsigned long long fibonacci(int num);

int main(){
    int n;
    cin>>n;
    unsigned long long result = fibonacci(n);
    cout<<result<<endl;
    return 0;
}