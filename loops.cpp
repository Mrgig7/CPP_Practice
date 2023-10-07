// Print first 100 natural numbers

#include <iostream>
using namespace std;
 
void printUsingFor(int n){
    for(int i=1; i<=n; i++){
        cout << i << endl;

    }
    cout << endl;

// Infinite Loop
    for(;;){ 
        cout << n << endl;
    }

// False statement
    for(;0;)
        cout << n << endl;
}

void printUsingWhile(int n){
    int i = 0;
    // while(i<=n){
    //     cout << i << endl;
    //     i++;
    // }

// infinte loop (while we set condition true)
// odd numbers till 100 
      while(true){
        i++;
        if(i>=100){
            break;
        }
        if(i%2 == 0 ){
            continue;
        }
        cout << i << endl;
    }
    cout << "Out of the loop" << endl;
}

void printUsingDoWhile(int n){
    int i = 1;
    do{
        cout << i << endl;
        i++;
    }while(i<=n);
    cout << endl;
}



int main(){
    printUsingWhile(1000);
    return 0;
}