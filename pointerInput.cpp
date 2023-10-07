#include <iostream>
using namespace std;

//int sunOfArray(int *arr) // Address of the first element that is arrays address
int sumOfArray(int *arr,int n){
    int totalSum=0;
    for(int i =0;i<n;i++){
        totalSum += *(arr + i);
    }
    return totalSum;
}

// reference variable
int changeVariable(int &n1){
    *(n1)++;
}


int main(){
    int arr[6] = {0,1,2,3,4,5};
    // int *ptr = arr;
    cout<< sumOfArray(arr,6)<<endl;
    int n = 10;
    changeVariable(10);
    cout<<n<<endl;
    return 0;
}