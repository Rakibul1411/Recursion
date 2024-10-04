#include <iostream>

using namespace std;

void reverse(string &basicString, int i, unsigned long i1) {
    if (i > i1) {
        return;
    }
    swap(basicString[i], basicString[i1]);
    i++;
    i1--;
    reverse(basicString, i, i1);
}

string reverseString(string str){
    reverse(str, 0, str.size()-1);
    return str;
}
int main() {
    string name;
    cout<< "Enter the string: ";
    cin>> name;
    string s = reverseString(name);
    cout<<"Reverse string is: "<< s << endl;
    return 0;
}
