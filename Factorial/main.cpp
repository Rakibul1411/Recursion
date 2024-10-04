#include <iostream>

int factorial(int n);

using namespace std;
int main() {
    int n;
    cin>> n;
    int ans = factorial(n);
    cout<< ans <<endl;
    return 0;
}

int factorial(int n) {
    if(n==0){
        return 1;
    } else{
        return n* factorial(n-1);
    }
}
