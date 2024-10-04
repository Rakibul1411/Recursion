#include <iostream>

int factorial(int n);

using namespace std;
int main() {
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int factor = factorial(n);
    cout<<"The value of n factorial is: ";
    cout<< factor;
    return 0;
}

int factorial(int n) {

    if(n==0){
        return 1;
    }
    return n * factorial(n-1);
}
