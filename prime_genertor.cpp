// You are using GCC
#include <iostream>
using namespace std;

bool isPrime(int num){
    if(num==1||num==0){
        return false;
    }
    for (int i =2; i*i<=num; i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

void generatePrimesInRange(int &m , int &n){
    for(int num=m;num<=n;++num){
        if(isPrime(num)){
            cout<<num<<" ";
        }
    }
    cout<<endl;
}

int main(){
    int m,n;
    cin>>m>>n;
    generatePrimesInRange(m,n);
    return 0;
}