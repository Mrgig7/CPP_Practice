#include <iostream>
using namespace std;

// int main() {
//     cout<<"Hello Cpp 10";
//     return 0;
// }


namespace n1 { 
    int x=2;

void fun()
{

cout << "This is fun() of n1" <<endl;
}
}

namespace n2{

int x=5;
 void fun()
 {

cout<<"This is fun() of n2"<<endl;
 }
}


int main(){

cout<<n1::x<< endl;
n1::fun();

cout<<n2::x<< endl;
n2::fun();

return 0;

}