#include <iostream>

using namespace std;

void NaturalNumber(int n) {
  if(n==0)
      return;

    cout << n <<" ";
    NaturalNumber(n-1);
}

int main() {
    int number;
    cin>>number;
    NaturalNumber(number);
    return 0;
}
