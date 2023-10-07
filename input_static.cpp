#include <iostream>
using namespace std;

class Demo{
    private:
        static int x;
        static int y;
    
    public:
        static int get(){
            cin>>x>>y;
        }
        
       static void fun(){
            cout<<"Value of X: "<<x<<endl;
            cout<<"Value of Y: "<<y<<endl;
        }
    
};

int Demo::x = 10;
int Demo::y = 20;

int main(){

    Demo t;
    t.get();
    cout<<"Value of X: "<<10<<endl;
    cout<<"Value of Y: "<<20<<endl;
    
    t.fun();
    return 0;
    
}