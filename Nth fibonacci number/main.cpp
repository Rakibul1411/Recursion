#include <iostream>

using namespace std;

int fibo(int number) {
  if(number==0)
      return 0;
  else if(number==1)
      return 1;
  int p = fibo(number-1)+ fibo(number-2);
    return p;
}

int main() {
    int number;
    cout<< "Enter the number: ";
    cin>> number;
    int fiboNmbr = fibo(number);
    cout<< fiboNmbr;
    return 0;
}
