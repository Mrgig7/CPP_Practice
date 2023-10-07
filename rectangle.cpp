// You are using GCC
#include <iostream>
#include <iomanip>
using namespace std;

class Rectangle{
    private:
    static int count;
    int lenght;
    int width;
    
    public:
    Rectangle(){
        lenght = 0;
        width = 0;
        count++;
    }
    
    static int getCount(){
        return count;
    }
    
    void setDimensions(int l, int w){
        lenght = l;
        width = w;
    
    }
    
    int Area(){
        return lenght*width;
    }
};

int Rectangle::count =0;

int main(){
    int n;
    cin>>n;
    
    Rectangle rectangles[n];
    
    for (int i = 0;i<n; i++){
        int lenght,width;
        cin>>lenght>>width;
        rectangles[i].setDimensions(lenght,width);
    }
    
    cout<<"Total number of rectangles: "<<Rectangle::getCount()<<endl;
    
    for (int i=0;i<n;i++){
        cout<<"Area of rectangle "<<i+1<<": "<<rectangles[i].Area()<<endl;
    }
    
    return 0;
}
