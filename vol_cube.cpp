#include <iostream>
using namespace std;

class Box {
    private:
    int lenght;
    
    public:
    Box():lenght(0){}
    
    void get(){
        cin>>lenght;
    }
    
    friend int printVolume(Box &b);
};

int printVolume(Box &b){
    return b.lenght*b.lenght*b.lenght;
}

int main(){
    Box t;
    t.get();
    int volume = printVolume(t);
    cout<<volume<<endl;
    return 0;
}