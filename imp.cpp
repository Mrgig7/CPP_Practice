// You are using GCC
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Box{
    private:
    double w;
    double h;
    double d;
    
    public:
    
    // Box(): w(0.0), h(0.0), d(0.0) {}
    Box(double a, double b, double c) : w(a),h(b),d(c){}
    Box(double s) : w(s),h(s),d(s){}
    
    double vol(){
        return w*h*d;
    }
};

int main(){
    double c,d,e,f;
    
    cin>>c>>d>>e;
    cin>>f;
    
    Box val(0);
    Box r(c,d,e);
    Box q(f);
    
    cout<<"Volume of mybox1 is "<<val.vol()<<endl;
    cout<<"Volume of mybox2 is "<<r.vol()<<endl;
    cout<<"Volume of mycube is "<<q.vol()<<endl;
    
    return 0;
}