#include <iostream>
using namespace std;

int factorial(int n){
    if (n <= 0){
        return 1;
    }
    return n * factorial(n - 1);
}

int main(){
    int num;
    cin >> num;
    
    int result = factorial(num);
    cout << result << endl; // Print the calculated factorial
    return 0;
}
