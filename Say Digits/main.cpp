#include <iostream>

using namespace std;

void printdigits(int digits, string pString[]) {
   if(digits==0)
       return;
   int p = digits%10;
   digits = digits/10;
    printdigits(digits, pString);
    cout<< pString[p] << " ";

}

int main() {
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int sayDigits;
    cout<< "Enter the digits: ";
    cin>> sayDigits;
    printdigits(sayDigits, arr);
    return 0;
}
