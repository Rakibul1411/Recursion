#include <iostream>

using namespace std;

void simply(int n) {
   if(n>0){
       simply(n-1);
       cout<< n<< " " ;
       simply(n-1);
   }
}

int main() {
    int n;
    cout<<"Enter the number: ";
    cin>> n;
    cout<<"Print number is: ";
    simply(n);
    return 0;
}
