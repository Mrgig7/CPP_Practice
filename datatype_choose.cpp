// You are using GCC
#include <iostream>
#include <string>
using namespace std;

int add(int num1, int num2){
    return num1+num2;
}

string add(const string& str1, const string& str2){
    return str1+str2;
}

template <typename T>
T add(T first){
    return first;
}

template <typename T, typename ... Args>
T add(T first, Args... args){
    return add(first)+add(args...);
}
int main(){
    string inp_type;
    cin>>inp_type;
    
    if(inp_type == "int"){
        int inp1, inp2, inp3;
        cin>>inp1>>inp2>>inp3;
        
        cout<<add(inp1)<<endl;
        cout<<add(inp1,inp2)<<endl;
        cout<<add(inp1,inp2,inp3)<<endl;
    } else if (inp_type == "str"){
        string inp1,inp2,inp3;
        cin>>inp1>>inp2>>inp3;
        
        cout<<add(inp1)<<endl;
        cout<<add(inp1,inp2)<<endl;
        cout<<add(inp1,inp2,inp3)<<endl;
    }
    
    return 0;
}