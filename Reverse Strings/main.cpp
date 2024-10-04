#include <iostream>

using namespace std;

void reverseString(string &string, int first, int len) {

    cout<<"Call received for: "<< string << endl;

    if(first > len){
        return;
    }
    swap(string[first], string[len]);
    first++;
    len--;
    reverseString(string, first, len);
}

int main() {
    string str;
    cout<<"Enter the string: ";
    cin>> str;
    int len = str.size();
    reverseString(str, 0, len-1);
    cout<< endl;
    cout<<"Reverse string is: ";
    cout<< str << endl;
    return 0;
}
