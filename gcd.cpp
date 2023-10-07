// You are using GCC

#include <iostream>
using namespace std;

inline int gcd(int a,int b){
    if (b==0){
        return a;
    }
    
    int r = a%b;
    return gcd(b,r);
}

int main(){
    int a,b;
    cin>>a>>b;
    
    int gcd_val = gcd(a,b);
    
    cout<<gcd_val<<endl;
}