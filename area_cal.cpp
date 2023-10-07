// You are using GCC
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class Area{
    public:
    void get();
    void squareArea();
    void rectangleArea();
    void circleArea();
    void parallelogramArea();
    
    private:
    int side,lenght,breadth;
    double radius,base,height;
};

void Area::get(){
    cin>>side>>lenght>>breadth>>radius>>base>>height;
}

inline void Area::squareArea(){
    cout<<"Area of the square: "<<side*side<<endl;
}

inline void Area::rectangleArea(){
    cout<<"Area of the rectangle: "<<lenght*breadth<<endl;
}

inline void Area::circleArea(){
    cout<<"Area of the circle: "<<fixed<<setprecision(2)<<3.14*radius*radius<<endl;
}

inline void Area::parallelogramArea(){
    cout<<"Area of the parallelogram: "<<base*height<<endl;
}

int main(){
    Area a;
    a.get();
    a.squareArea();
    a.rectangleArea();
    a.circleArea();
    a.parallelogramArea();
    
    return 0;
    

}